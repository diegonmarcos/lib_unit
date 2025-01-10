#!/bin/bash

# Check if an input file was provided
if [ $# -eq 0 ]; then
  echo "Usage: $0 <input_file.c>"
  exit 1
fi

input_file="$1"

# Check if the input file exists
if [ ! -f "$input_file" ]; then
  echo "Error: Input file not found: $input_file"
  exit 1
fi

input_dir="$(dirname "$input_file")"
output_file="$input_dir/$(basename "$1" .c)_clean.c"
marker="#debug-line"

# Process the file with awk, removing lines containing the marker
awk -v marker="$marker" '!index($0, marker)' "$input_file" > "$output_file"

# Check if awk command was successful
if [ $? -ne 0 ]; then
  echo "Error: Failed to process the file with awk."
  exit 1
fi

echo "Debug lines removed. Output written to: $output_file"