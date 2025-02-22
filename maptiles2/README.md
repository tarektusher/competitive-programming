# Identifying Map Tiles

**Problem**: [aboveaverage](https://open.kattis.com/problems/maptiles2)

**Difficulty**: 1.5

## Solution

For this one, since there are effective 4 positions at level 1, 16 at level 2, etc., we can see that each the number of rows and columns doubles at every zoom level. Because of this, the number of rows/columns is equal to 2 ^ *length of quadkey*. Because of this, a 1 or 3 increases the *x* by half of the total width of the square, and a 2 or 3 increases the *y* by half the height available. After moving, the remaining area halves, so we halve the amount we would move by. For example, in length 3, we would increase *x* or *y* by 4, then 2, then 1, if we were to increase.
