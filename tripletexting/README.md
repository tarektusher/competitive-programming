# Triple Texting

**Problem**: [tripletexting](https://open.kattis.com/problems/tripletexting)

**Difficulty**: 1.6

## Solution

For this, take in the string *s* and consider the it as broken into 3 sections of equal length. Iterate over these three sections in parallel, essentially; iterate over the first section, and if a position in the first section matches the same spot in the second section, output it, otherwise output that position in the third section.
