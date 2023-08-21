#!/bin/bash
wget -P /temp https://github.com/ahmedsabrieldeeb/alx-low_level_programming/tree/master/0x18-dynamic_libraries/my_rand.so
export LD_PRELOAD=/temp/my_rand.so
