#!/bin/bash

folder_name="build"

# Check if the folder exists
if [ ! -d "$folder_name" ]; then
    # Create the folder
    mkdir "$folder_name"
    echo "Folder created: $folder_name"
fi

cd build

echo "Run CMake"
cmake ..

echo "Run make"
make

echo "Run test"
./test/TestExample/TestExample

echo "Run summary"
make test