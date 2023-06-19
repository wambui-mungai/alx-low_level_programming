#!/bin/bash
wget -P https://github.com/wambui-mungai/alx-low_level_programming/tree/master/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
