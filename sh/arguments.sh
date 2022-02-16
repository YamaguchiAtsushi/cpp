#! /bin/bash

data_dir=../data/
exe_file=../build/arguments

for file in `ls ${data_dir}`; do
    ${exe_file} ${data_dir}${file}
done