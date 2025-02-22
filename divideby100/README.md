# Divide by 100...

**Problem**: [divideby100](https://open.kattis.com/problems/divideby100)

**Difficulty**: 4.1

## Solution

For this, taking the numbers in as integers and doing any sort of math this way won't be sufficient (10 ^ 10 ^ 6 is huge!), so one takes *N* and *M* as strings, and needs to know where to split them to place the decimal point. For simplicity, while both *N* and *M* have trailing 0s, pop them off in pairs (one from each *N* and *M*) while this can be done. A special case can be handled where *M* == 1, so just output *N*. If *M* is smaller than *N* in length, let *x* be the number of 0s in *M*; output the first *N*-*x* digits, a ".", and the remaining *x* digits. If *M* is larger than *N*, output a "0.", and *M*-*N*-1 0s, to shift the number of the appropriate amount, and then output *N*.
