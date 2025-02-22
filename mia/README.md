# Mia

**Problem**: [mia](https://open.kattis.com/problems/mia)

**Difficulty**: 2.1

## Solution

The easiest way is to immediately create the "best" score from the two rolled die for each player, which is effectively (max(s, t) * 10) + min(s, t), to put the larger value first. Then, one can enumerate the cases fairly easily: if p1 == p2, tie; if p1 = mia and p1 != mia, p1; if p2 = mia and p1 != mia, p2; if p1 = double and p2 != double, p1; if p2 = double and p1 != double, p2; otherwise, the comparisons left are both p1 and p2 being doubles or both p1 and p2 not being doubles, both of which are settled by the winner being the larger value.
