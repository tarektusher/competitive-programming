# Spavanac

**Problem**: [spavanac](https://open.kattis.com/problems/spavanac)

**Difficulty**: 1.4

## Solution

One can simply adjust the minutes, and then hours, making corrections as necessary. One can first decrement *M* by 45; if this is negative, then we decrement *H* and add 60 to *M*, to represent how this time will look when crossing across hours. If *H* is now negative, add 24, since this is a time that has crossed days.
