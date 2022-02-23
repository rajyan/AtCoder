#! /bin/bash -eux

PROJECT_DIR=${PROJECT_DIR:-'/home/rajyan/Workspace/AtCoder'}
LIBRARY_DIR=${LIBRARY_DIR:-'/home/rajyan/Workspace/library/src'}
CMAKE_TEMPLATE=${CMAKE_TEMPLATE:-'/home/rajyan/Workspace/AtCoder/CMakeLists_template.txt'}

# make directory
contest_dir=${1?'Set directory name!'}
mkdir "$PROJECT_DIR"/"$contest_dir"
cd "$PROJECT_DIR"/"$contest_dir"

# make files and CmakeLists
file_num=${2:-6}
i=0
PROJECT_NAME=$contest_dir envsubst \$PROJECT_NAME < "$CMAKE_TEMPLATE" > CMakeLists.txt
for c in {A..Z} ; do
  cat "$LIBRARY_DIR"/template.hpp > "$c".cpp
  echo "add_executable(${contest_dir##*/}_${c} ${c}.cpp)" >> CMakeLists.txt
  (( ++i == file_num )) && break
done
