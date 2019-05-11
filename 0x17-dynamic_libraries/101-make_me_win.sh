#!/bin/bash
wget -P /tmp/ https://github.com/AndZapata/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/random.so
export LD_PRELOAD=/tmp/random.so
