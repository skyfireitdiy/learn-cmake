#!/bin/bash

echo "#define COMMIT_INFO \"`git log --pretty=oneline | head -n1`\"" > $1