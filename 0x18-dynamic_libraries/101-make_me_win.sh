#!/bin/bash
wget -P /tmp https://github.com/damtrix/alx-low_level_programming/raw/master/0x18-dynamic_libraries/randnum.so
export LD_PRELOAD=/tmp/randnum.so
