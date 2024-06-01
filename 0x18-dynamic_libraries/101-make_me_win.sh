#!/bin/bash
wget -P /tmp_test https://github.com/josephnady/alx-low_level_programming/blob/main/0x18-dynamic_libraries/librand_override.so
export LD_PRELOAD=/tmp_test/librand_override.so
