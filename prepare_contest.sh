#! /bin/bash -eux

PROJECT_DIR=${PROJECT_DIR:-'/home/rajyan/CLion/AtCoder'}
LIBRARY_DIR=${LIBRARY_DIR:-'/home/rajyan/CLion/library/src'}
CMAKE_TEMPLATE=${CMAKE_TEMPLATE:-'/home/rajyan/CLion/AtCoder/CMakeLists_template.txt'}

# make directory
contest_dir=${1?'Set directory name!'}
mkdir "$PROJECT_DIR"/"$contest_dir"

# make files and CmakeLists
file_num=${2:-6}
i=0
PROJECT_NAME=$contest_dir envsubst < "$CMAKE_TEMPLATE" > "$PROJECT_DIR"/"$contest_dir"/CMakeLists.txt
for c in {A..Z} ; do
  cat "$LIBRARY_DIR"/template.hpp > "$PROJECT_DIR"/"$contest_dir"/"$c".cpp
  echo "add_executable(${contest_dir##*/}_${c} ${c}.cpp)" >> "$PROJECT_DIR"/"$contest_dir"/CMakeLists.txt
  (( ++i == file_num )) && break
done
