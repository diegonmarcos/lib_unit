#!/bin/bash

read -p "Enter a number(int) (1 - Libft, 2 - Printf, 3 - GNL, or 4): " input

if [[ $input == "1" ]]; then
	echo "1"

elif [[ $input == "2" ]]; then
# PRINTF TESTER
# Copy the folder
	cp -r src_tester/printfTester-master lib/src_lib/

# Run make
	make -C lib/src_lib/printfTester-master

# Wait for 1 second
	sleep 1

 # Delete the folder and clean object files
	rm -rf lib/src_lib/printfTester-master
	make -C lib/src_lib/printfTester-master fclean

# Run mine make
	make

elif [[ $input == "3" ]]; then
	echo "3"

else
	echo "Invalid input. Please enter 1, 2, 3 or 4."
fi