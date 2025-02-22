# Flexible Spaces

**Problem**: [flexible](https://open.kattis.com/problems/flexible)

**Difficulty**: 1.7

## Solution

For this, keep two sets, one for the partition points noted at any given point, and the other for all the unique widths (a set to avoid duplicates). When reading a given partition, add the following: unit 0 up to this partition point, the complementary distance of *W* - partition, and the difference between this partition and each respective partition read so far. As well, consider the case of the room with no partitions. After adding all these to the set, move all of it to a list, sort that list in ascending order, and output it.
