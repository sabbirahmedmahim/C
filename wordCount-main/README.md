# Text File Word Counter

A simple C program that mimics the basic functionality of the Unix `wc` command. It reads a text file and counts the number of lines, words, and characters, then outputs these counts.

## Features
- Counts lines by detecting newline characters.
- Counts words by detecting whitespace-separated tokens.
- Counts total characters including whitespace and punctuation.
- Handles errors gracefully (e.g., missing file or unable to open).

## Usage
Compile the program:
```bash
gcc -o wordcounter wordcounter.c
