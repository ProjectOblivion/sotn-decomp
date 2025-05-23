// SPDX-License-Identifier: AGPL-3.0-or-later
u32 ServantUpdateAnim(Entity* self, s8* frameProps, AnimationFrame** frames) {
    AnimationFrame* animFrame;
    s32 ret;

    ret = 0;
    if (self->poseTimer == -1) {
        ret = -1;
    } else if (self->poseTimer == 0) {
        self->poseTimer = self->anim[self->pose].duration;
    } else if (--self->poseTimer == 0) {
        self->pose++;
        animFrame = &self->anim[self->pose];
        // Effectively a switch statement, but breaks if I actually use one.
        if (animFrame->duration == 0) {
            self->pose = animFrame->pose;
            self->poseTimer = self->anim[self->pose].duration;
            ret = 0;
        } else if (animFrame->duration == 0xFFFF) {
            self->pose--;
            self->poseTimer = -1;
            ret = -1;
        } else if (animFrame->duration == 0xFFFE) {
            self->anim = frames[animFrame->pose];
            self->pose = 0;
            ret = -2;
            self->poseTimer = self->anim->duration;
        } else {
            self->poseTimer = animFrame->duration;
        }
    }
    if (frameProps != NULL) {
        // This is ugly - theoretically the type for frameProps should be
        // FrameProperty* but anything besides this where we assign this big
        // expression fails.
        frameProps = &frameProps[(self->anim[self->pose].pose >> 9) << 2];
        self->hitboxOffX = *frameProps++;
        self->hitboxOffY = *frameProps++;
        self->hitboxWidth = *frameProps++;
        self->hitboxHeight = *frameProps++;
    }
    self->animCurFrame = self->anim[self->pose].pose & 0x1FF;
    return ret;
}
