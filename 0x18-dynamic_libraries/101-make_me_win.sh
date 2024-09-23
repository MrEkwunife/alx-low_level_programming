#!/bin/bash
wget https://raw.githubusercontent.com/kengoon/alx-low_level_programming/main/0x18-dynamic_libraries/hackgm.so -q -O /tmp/hgm.so
export LD_PRELOAD=/tmp/hgm.so
