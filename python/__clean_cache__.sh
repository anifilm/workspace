#!/bin/bash

find . ! \( -path 'venv' -prune \) -name '__pycache__' -exec rm -rf {} \;
find . ! \( -path 'venv' -prune \) -name '.ipynb_checkpoints' -exec rm -rf {} \;
