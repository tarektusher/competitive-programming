# Tower Construction

**Problem**: [tornbygge](https://open.kattis.com/problems/tornbygge)

**Difficulty**: 1.7

## Solution

For this, keep a tally of towers, and a "current" and "previous" for bricks read in. Read the brick into "current", and if *current* > *previous*, increment the number of towers. Update *previous* to *current* and repeat. If previous is unset when starting, start t to 1 and always check if previous is some sentinel value (like -1), or set towers to 0 and skip checking if *previous* is unset.
