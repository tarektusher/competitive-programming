# Frosh Week

**Problem**: [froshweek](https://open.kattis.com/problems/froshweek)

**Difficulty**: 5.8

## Solution

Since every single pair-wise must be counted, this is effectively an inversion count in merge-sort. So, keep a global variable of swaps occured (initialized at zero), and implement a basic merge-sort that, when the left-hand element is larger than the right-hand element, there will be *leftArraySize* minus *leftArrayIndex* swaps that occur to place the right-hand element in its place.
