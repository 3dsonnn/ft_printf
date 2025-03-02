#!/bin/bash

# Compile the program
cc teste.c -o lol -L. -lftprintf
if [ $? -ne 0 ]; then
    echo "Compilation failed!"
    exit 1
fi

# Run the program and capture output
./lol > result.txt

# Check if input_examples.txt exists
if [ ! -f "input_examples.txt" ]; then
    echo "Error: input_examples.txt file not found!"
    exit 1
fi

# Read expected outputs into an array
mapfile -t expected_outputs < input_examples.txt

# Initialize counters and arrays
line_number=0
wrong=0
declare -a wrongs
right=0

# Compare results with expected outputs
while IFS= read -r result_line; do
    if [ $line_number -lt ${#expected_outputs[@]} ]; then
        expected_line="${expected_outputs[$line_number]}"
    else
        expected_line=""
    fi

    echo "$result_line | $expected_line : $(if [ "$result_line" = "$expected_line" ]; then echo "OK"; else echo "KO"; fi)"

    if [ "$result_line" != "$expected_line" ]; then
        wrong=$((wrong + 1))
        wrongs+=("$line_number")
    else
        right=$((right + 1))
    fi
    line_number=$((line_number + 1))
done < result.txt

echo 

# Check if went_wrong.txt exists
if [ ! -f "went_wrong.txt" ]; then
    echo "Error: went_wrong.txt file not found!"
    exit 1
fi

# Read test lines into an array
mapfile -t test_lines < went_wrong.txt

# Print summary of results
if [ $wrong -eq 0 ]; then
    echo "All tests passed!"
else
    echo "You failed $wrong tests"
    echo "These are the tests that failed:"
    for i in "${wrongs[@]}"; do
        if [ $i -lt ${#test_lines[@]} ]; then
            echo "${test_lines[$i]}"
        fi
    done
fi

# Cleanup
rm -f lol result.txt
