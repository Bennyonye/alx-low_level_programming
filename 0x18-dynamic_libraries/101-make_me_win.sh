#!/bin/bash
wget -p .. https://raw.githubusercontent.com/Bennyonye/alx-low_level_programming/master/0x18-dynamic_libraries/libhack.so 
export LD_PRELOAD="$PWD/../Libhack.so"