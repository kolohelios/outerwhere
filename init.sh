#!/bin/bash

lib_folder="$PWD/src"

input="$PWD/packages.csv"
cd src

while IFS=, read -r name git_url use_commit_hash
do
  echo "Installing $name from $git_url at commit $use_commit_hash"
  rm -rf "$lib_folder/$name" > /dev/null 2> /dev/null
  git clone "$git_url" > /dev/null 2> /dev/null
  (cd "$lib_folder/$name" > /dev/null 2> /dev/null && git checkout "$use_commit_hash" > /dev/null 2> /dev/null)
done < "$input"
