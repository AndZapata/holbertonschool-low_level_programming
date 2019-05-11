#!/bin/bash
wget -P /tmp/ https://github.com/AndZapata/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/101_task.so
export LD_PRELOAD=/tmp/101_task.so
