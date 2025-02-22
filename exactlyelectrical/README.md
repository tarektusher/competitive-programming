# Exactly Electrical

**Problem**: [exactlyelectrical](https://open.kattis.com/problems/exactlyelectrical)

**Difficulty**: 2.0

## Solution

For this, take the absolute value of the difference between *a* and *c*, and the absolute value of the difference between *b* and *d*. The path needs to be exactly this many total units; if *t* is >= this distance, we have *at least* enough, and if the remaining distance (*t* - *distance*) is strictly even, then we can simply bounce back and forth along some adjacent road to waste the remaining charge units.
