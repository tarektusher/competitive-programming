# Simplicity 

**Problem**: [simplicity](https://open.kattis.com/problems/simplicity)

**Difficulty**: 2.5

## Solution

For this, build a histogram of all the unique characters in the string; if there are only 1 or 2, output 0 and quit; otherwise, sort all the occurrences in ascending order, and total all but the highest 2, and output that number.
