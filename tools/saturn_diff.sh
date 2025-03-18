#!/usr/bin/env bash

FILENAME=$1
ORIGINAL=disks/saturn/$FILENAME
NEW=build/saturn/$FILENAME

sh-elf-objdump -z -m sh2 -b binary -D $NEW > $NEW-ours.txt
sh-elf-objdump -z -m sh2 -b binary -D $ORIGINAL > $NEW-theirs.txt
diff $NEW-ours.txt $NEW-theirs.txt > $NEW-diff.txt
