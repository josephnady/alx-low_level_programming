#!/bin/bash
wget -P /tmp_test https://github.com/josephnady/alx-low_level_programming/blob/661e8495ee4c36134dcc1afec2142518a2219e66/0x18-dynamic_libraries/librand_override.so
export LD_PRELOAD=/tmp_test/librand_override.so
