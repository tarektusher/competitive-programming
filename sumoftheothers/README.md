# Sum of the Others

**Problem**: [sumoftheothers](https://open.kattis.com/problems/sumoftheothers)

**Difficulty**: 1.9

## Solution

For each test case, since one number is equal to the sum of all the others, one can sum up *every* value in the list (and store them), and then go through each number in the list, and see if that sum, *minus* this value, is equivalent to this number; if so, output it and move on to the next case.
