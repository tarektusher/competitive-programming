# Goat Rope

**Problem**: [goatrope](https://open.kattis.com/problems/goatrope)

**Difficulty**: 1.5

## Solution

For this, one can calculate the hypotenuse to each of the 4 corners of the house (the two points given and have their x or y points swapped to create the other points, and apply some trig), but if the goat *x*, *y* is between the two *y* values given, or between the two *x* values given, the distance will be the straightline-distance to the closest "wall".
