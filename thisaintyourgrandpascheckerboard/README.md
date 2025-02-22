# This Ain't Your Grandpa's Checkerboard

**Problem**: [thisaintyourgrandpascheckerboard](https://open.kattis.com/problems/thisaintyourgrandpascheckerboard)

**Difficulty**: 1.4

## Solution

A lot of little things to keep track of, but nothing crazy. We can start by keeping track of all the rows, and all of the columns, as we read in the string, and verify them after. When we read the board line by line, we can consider this to be one single row, but for the columns, we want to make a queue kind of structure (I used a vector), and push each character *i* in the line read, onto the queue corresponding to column *i*.

To verify, we can simply loop through every column/row given, and keep track of the number of black/white pieces, and at each point check that the current piece does not match both of the surrounding pieces.
