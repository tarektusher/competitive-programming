# Poker Hand

**Problem**: [pokerhand](https://open.kattis.com/problems/pokerhand)

**Difficult**: 1.4

## Solution

One can read in the first character of each card (the suits are totally irrelevant) into a list, and loop through the list, picking a rank, and then doing a nested loop to count all occurrences of that rank, and tally them up, keeping track of the highest number of one rank seen.
