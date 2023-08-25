#!/bin/bash
wget -P ~/alx-low_level_programming/0x18-dynamic_libraries/tests https://github.com/alx-tools/0x18.c/raw/master/gm
export LD_PRELOAD=~/alx-low_level_programming/0x18-dynamic_libraries/tests/gm
