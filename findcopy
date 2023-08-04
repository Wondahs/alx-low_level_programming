#!/bin/bash

# Ask the user for the number of files to find
read -p "Enter the number of files to find: " num_files

# Ask the user to input the names of the files
files=()
for ((i=1; i<=$num_files; i++)); do
    read -p "Enter the name of file $i: " file_name
    files+=("$file_name")
done

# Ask for search directory and target directory
read -p "Enter the search directory: " search_dir
read -p "Enter the target directory: " target_dir

# Search and copy files
for file in "${files[@]}"; do
    find "$search_dir" -type f -name "$file" -exec cp -t "$target_dir" {} +
done

echo "Files copied successfully!"
