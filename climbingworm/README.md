# Climbing Worm

**Problem**: [climbingworm](https://open.kattis.com/problems/climbingworm)

**Difficulty**: 2.4

## Solution

For this problem, just simulate the climb! Keep a tally of climbs, and while the current height is less than the height specified, climb by *a*, increment number of climbs, check height again (breaking out of the loop if the height has been reached), rest and fall *b*. 
