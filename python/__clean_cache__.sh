#!/bin/bash

find . -name '__pycache__' -exec rm -rf {} \;
find . -name '.ipynb_checkpoints' -exec rm -rf {} \;
