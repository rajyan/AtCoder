#!/bin/bash -eux

PROJECT_DIR=${PROJECT_DIR:-'/home/rajyan/kyopro/AtCoder'}
CMAKE_TEMPLATE=${CMAKE_TEMPLATE:-'/home/rajyan/kyopro/AtCoder/CMakeLists_template.txt'}

# create CMakeLists
contest_dir=${1?'Set directory name!'}
PROJECT_NAME=$contest_dir envsubst < "$CMAKE_TEMPLATE" > "$PROJECT_DIR"/"$contest_dir"/CMakeLists.txt

for file in "$PROJECT_DIR"/"$contest_dir"/*.cpp ; do
  echo "add_executable(${contest_dir##*/}_${file##*/} ${file##*/})" >> "$PROJECT_DIR"/"$contest_dir"/CMakeLists.txt
done
