# Daylight Saving Time

**Problem**: [dst](https://open.kattis.com/problems/dst)

**Difficulty**: 2.1

## Solution

For a forward change, simply add *D* to *M*, and then, to represent the hours crossed, add *M* / 60 to *H*. For a backward change, decrement *M* by 60, and while *M* < 0, add 60 to *M* and decrement *H* by 1. After that, add 24 to *H* while it is negative. Finally (for both forward and backwards changes) to bring the new values into valid ranges, use modulo division, outputting *H* % 24 and *M* % 60.
