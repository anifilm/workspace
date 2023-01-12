#!/bin/bash

find . -name 'target' -exec rm -rf {} \;
find . -name 'Cargo.lock' -exec rm -rf {} \;
