# Number Fun

**Problem**: [numberfun](https://open.kattis.com/problems/numberfun)

**Difficulty**: 1.4

## Solution

One can read in *a*, *b*, and *c*, and enumerate the cases (*a* + *b* == *c*?, *b* + *a* == *c*?, ...) and output "Possible" if any are true. Regarding implementation, one may need to be careful with division, and perhaps use doubles or similar, because 5 / 3 does actually equal 1, if using ints, but this is a case regarded as "Impossible" in the sample data.
