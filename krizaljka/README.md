# Križaljka

**Problem**: [krizaljka](https://open.kattis.com/problems/krizaljka)

**Difficulty**: 1.8

## Solution

For this, create a *B* x *A* sized grid of "."s, and iterate through the letters of *A*, seeing what index (if any) they are found in *B*; if found, stop; the index of this letter in *A* and its occurrence in *B* is essentially the (x, y) point the words intersect at. Therefore, write *A* (starting from the left) along the grid at the *y* value, and write *B* (starting from the top) down the grid at the *x* value.