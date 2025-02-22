# Transit Woes

**Problem**: [transitwoes](https://open.kattis.com/problems/transitwoes)

**Difficulty**: 1.3

## Solution

For this, read in *s*, *t*, and *n*, and place the next 3 rows in their own lists, representing the *walk times*, *ride times*, and *intervals*. Keep a tally of *time taken*, starting at 0. Looping from *i* = 0 to *n*, add the *ith* walk time to the total. Then, calculate the wait time to the next bus (total taken % wait time\[i\]) and (interval\[i\] - wait time) to the total, if the wait time will be non-zero. After this, check if *t* minus *s* is *at least* as large as the time taken. If so, output "yes"; otherwise, the time taken indicates that Yraglac will be late, and output "no".
