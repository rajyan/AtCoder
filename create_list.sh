#!/bin/bash -eux

PROJECT_DIR=${PROJECT_DIR:-'/home/rajyan/CLion/AtCoder'}
CMAKE_TEMPLATE=${CMAKE_TEMPLATE:-'/home/rajyan/CLion/AtCoder/CMakeLists_template.txt'}

# create CMakeLists
CONTEST_DIR=${1?'Set directory name!'}
CMAKE_FILE="$PROJECT_DIR"/"$CONTEST_DIR"/CMakeLists.txt
PROJECT_NAME=$CONTEST_DIR envsubst < "$CMAKE_TEMPLATE" > "$CMAKE_FILE"

for file in "$PROJECT_DIR"/"$CONTEST_DIR"/*.[hc]pp ; do
  name=${file##*/}
  echo "add_executable(${CONTEST_DIR##*/}_${name%.[hc]pp} $name)" >> "$CMAKE_FILE"
  if [[ $name == *.hpp ]]; then
    echo "set_target_properties(${CONTEST_DIR##*/}_${name%.hpp} PROPERTIES LINKER_LANGUAGE CXX)" >>"$CMAKE_FILE"
  fi
done
