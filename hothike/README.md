# Hot Hike

**Problem**: [hothike](https://open.kattis.com/problems/hothike)

**Difficulty**: 1.5

## Solution

For this, one can read in all *n* temperatues, and loop through from the first to 3rd last day, and take the bigger of that day and the day 2 ahead, and if it is smaller then any day so far (start with a value larger than the known range, which goes up to *40*), mark the temperature and day.
