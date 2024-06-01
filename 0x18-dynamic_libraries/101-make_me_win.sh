#!/bin/bash
wget -P /tmp_test https://raw.githubusercontent.com/josephnady/alx-low_level_programming/blob/main/0x18-dynamic_libraries/librand_override.so
export LD_PRELOAD=/tmp_test/librand_override.so
