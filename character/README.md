# Character Development

**Problem**: [character](https://open.kattis.com/problems/character)

**Difficulty**: 2.4

## Solution

For this, the answer is in the second paragraph; it's the total number of subsets of *N* that contain at least 2 characters. In a set of size *N*, there are 2 ^ *N* subsets, so we can take that, *minus* *N* subsets that are a single character, and 1 more subset for the empty set.
