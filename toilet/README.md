# Toilet Seat

**Problem**: [toilet](https://open.kattis.com/problems/toilet)

**Difficulty**: 2.4

## Solution

For this, keep a boolean for each of the three policies, and initialize them to whichever dicated by the first character in the line. Then, for each of the remaining lines, check whether the person desires the seat up, and then whether or not it *is* in each policy, and adding the appropriate number of swaps, and swapping the seat, if necessary.
