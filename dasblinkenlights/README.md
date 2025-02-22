# Planina

**Problem**: [planina](https://open.kattis.com/problems/dasblinkenlights)

**Difficulty**: 1.7

## Solution

It seems obvious to simply multiple *p* and *q* and see if it's less than *s*, and that will work for some, but not all, cases. Consider *p* = 5, *q* = 10, *s* = 15; this method would say that the soonest match is at 50, but they actually match at 10. The easiest approach is a nested set of loops, outer loop doing all multiples of *p* within *s*, and the inner loop being all multiples of *q* within *s*, and if these match, the two have flashed at the same time.
