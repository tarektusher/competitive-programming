# Parking

**Problem**: [parking](https://open.kattis.com/problems/parking)

**Difficulty**: 1.6

## Solution

For this problem, one can simply mark every moment each car is present in a map of some sort, and then iterate from the moment the first car arrives to when the last car leaves, and increment a total of the cost per car (at that moment) multiplied by the number of cars present.
