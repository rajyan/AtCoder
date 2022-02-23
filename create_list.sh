#!/bin/bash -eux

PROJECT_DIR=${PROJECT_DIR:-'/home/rajyan/Workspace/AtCoder'}
CMAKE_TEMPLATE=${CMAKE_TEMPLATE:-'/home/rajyan/Workspace/AtCoder/CMakeLists_template.txt'}

# create CMakeLists
CONTEST_DIR=${1?'Set directory name!'}
CMAKE_FILE="$PROJECT_DIR"/"$CONTEST_DIR"/CMakeLists.txt
PROJECT_NAME=$CONTEST_DIR envsubst \$PROJECT_NAME < "$CMAKE_TEMPLATE" > "$CMAKE_FILE"

for file in "$PROJECT_DIR"/"$CONTEST_DIR"/*.cpp ; do
  name=${file##*/}
  echo "add_executable(${CONTEST_DIR##*/}_${name%.cpp} $name)" >> "$CMAKE_FILE"
done
