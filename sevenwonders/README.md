# Seven Wonders

**Problem**: [sevenwonders](https://open.kattis.com/problems/sevenwonders)

**Difficulty**: 1.4

## Solution

For this one, one can loop through the string and increment the tally for character encountered as they are reached. The total can be calculated by squaring and summing each of the three tallies, and the triple-pairing idea can be done by finding the minimum of the three, since that will correspond to the number of triple-pairs, and multiply that by 7 and add it.
