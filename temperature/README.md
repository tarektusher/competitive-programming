# Time Travelling Temperatures

**Problem** [temperature](https://open.kattis.com/problems/temperature)

**Difficulty**: 2.2

## Solution

For this, if *X* is 0 and *Y* is 1, then the scales are the same and also resulting in multiple matching temperatures and "ALL GOOD". If *X* is not 0 but *Y* is 1, then the scales are the same, but they do not line up and will never result in the same temperature and "IMPOSSIBLE". Otherwise, we can take *X* and divide it by (1.0 - Y).
