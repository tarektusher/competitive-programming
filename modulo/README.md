# Modulo

**Problem**: [modulo](https://open.kattis.com/problems/modulo)

**Difficulty**: 1.5

## Solution

Nothing too complicated: keep a map to track the occurrences of numbers, and a tally of unique remainders. At each number, see if its remainder (modulo 42) has been seen in the map, if not, increment the tally, but increment the occurrences of this number in the map either way.
