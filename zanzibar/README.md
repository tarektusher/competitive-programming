# Stand on Zanzibar

**Problem**: [zanzibar](https://open.kattis.com/problems/zanzibar)

**Difficulty**: 1.4

## Solution

For each of the *T* cases, one starts a total at 0 and keeps a reference to the *current* and *previous* values along the line, updated each as one moves forward. If *current* is greater than 2 \* *previous*, that difference is added to the total.
