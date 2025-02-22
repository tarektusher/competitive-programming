# Datum

**Problem**: [datum](https://open.kattis.com/problems/datum)

**Difficulty**: 1.3

## Solution

This one is a bit tricky, for a 1.3. Since we know that Jan. 1 is Thursday, we can use that knowledge to base all future days off of, by viewing all future days as an *offset* of this day. One can create a map to determine how many days have passed to reach a particular month (i.e., for February, 31 days have passed), and use this + the day of *that* month (minus 1, because it's an offset), and consult an array of days, 7 long, starting at "Thursday", and mod the day of the year given by 7 to find what day it would be. The trickiest part of this is probably knowing how many days are in each month. (30 in September, April, June, and November...)
