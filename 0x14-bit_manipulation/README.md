# Bit Manipulation

This repository contains C programs that demonstrate various bit manipulation techniques, including converting binary numbers, printing binary representations, and manipulating individual bits.

## Description of Programs

1. **binary_to_uint.c**: Converts a binary number represented as a string to an unsigned int.
2. **print_binary.c**: Prints the binary representation of a number.
3. **get_bit.c**: Retrieves the value of a bit at a given index.
4. **set_bit.c**: Sets the value of a bit to 1 at a given index.
5. **clear_bit.c**: Sets the value of a bit to 0 at a given index.
6. **flip_bits.c**: Calculates the number of bits needed to be flipped to transform one number into another.

## How to Use

Each program has its own main file (e.g., `0-main.c`, `1-main.c`, etc.) demonstrating its usage. To compile and run the programs, follow these steps:

1. Compile the desired program along with its corresponding main file.
   ```
   gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o binary_to_uint
   ```

2. Run the compiled executable.
   ```
   ./binary_to_uint
   ```

## File Structure

- **main.h**: Header file containing function prototypes for all programs.
- **0-binary_to_uint.c**: Implementation of the function to convert binary to uint.
- **1-print_binary.c**: Implementation of the function to print binary representation.
- **2-get_bit.c**: Implementation of the function to get the value of a bit.
- **3-set_bit.c**: Implementation of the function to set a bit to 1.
- **4-clear_bit.c**: Implementation of the function to clear a bit to 0.
- **5-flip_bits.c**: Implementation of the function to flip bits.