#!/usr/bin/python3
"""A script to find the smallest divisor of integers from a file."""

import sys

def main():
    """Main function to find divisors."""
    # Check if the correct number of arguments are provided
    if len(sys.argv) != 2:
        print("Usage: python script_name.py input_file")
        sys.exit(1)

    # Open the file provided as an argument in read mode
    with open(sys.argv[1], 'r') as file:        # Read each line in the file

        for line in file:
            INT = int(line)     # Convert the line to an integer
            _div = find_divisor(INT)    # Find the smallest divisor of the integer
            print("{}={}*{}".format(INT, INT // _div, _div))    # Print the result

def find_divisor(INT=0):
    """Function to find the smallest divisor of an integer.
    Args:
        INT: integer input
    """
    x = 2
    while x < INT:
        if INT % x == 0:
            break
        x += 1
    return x

if __name__ == "__main__":
    main()
