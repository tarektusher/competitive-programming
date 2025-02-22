# Planina

**Problem**: [planina](https://open.kattis.com/problems/planina)

**Difficulty**: 1.3

## Solution

The task of finding all the points and manually inserting points and tracking all of this seems daunting. Since the points are put *between* two already-existing points, an iteration will take a row of *n* points to contain *n* + *n-1* points. Since the question asks for the total points at the end, and it's a perfect square, one can just loop and increase the points in one row (starting at 2, before any iteration) by this relation for each "iteration", and when done, square it to represent the points present in the square.
