#!/bin/bash
wget -P /tmp https://github.com/Khalouda11/alx_low_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
