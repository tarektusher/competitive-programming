# No Duplicates

**Problem**: [nodup](https://open.kattis.com/problems/nodup)

**Difficulty**: 1.4

## Solution

One can loop through the words given, and keep a map of the word to the number of its occurrences: if the occurrence of the word reached is already 1 (or is > 1, depending on when you check it), then it is a repeat.
