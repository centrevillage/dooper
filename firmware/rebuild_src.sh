#!/bin/bash
HW=hardware_platforms
echo "rebuilding src"
make clean | grep "warning\|error" # grep for silencing make outputs when regenerating everything.
make | grep "warning\|error"
echo "done"
