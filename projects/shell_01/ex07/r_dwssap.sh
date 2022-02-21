#!/bin/sh

sed -e '/^#/d' -e '2~2!d' -e 's/\([^:]*\):.*/\1/' /etc/passwd | rev | sort -r | sed "$FT_LINE1,$FT_LINE2"'!d' | tr "\n" "," | sed -e 's/,$/./' -e 's/,/, /g'