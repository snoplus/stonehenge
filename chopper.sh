#!/bin/bash

source ~/rat_env.sh
LD_LIBRARY_PATH+=:/home/cp/klabe/hiredis/lib
/home/cp/klabe/chopper/chopper $*
