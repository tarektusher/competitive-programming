# Ragged Right

**Problem**: [raggedright](https://open.kattis.com/problems/raggedright)

**Difficulty**: 1.8

## Solution

Read in every line and store its length in some list, but also track the largest value seen so far. Then, do a pass through the list (not including the last value!) and calculate the "raggedness" of that line and add it to a total.
