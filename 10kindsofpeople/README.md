# 10 Kinds of People

**Problem**: [10kindsofpeople](https://open.kattis.com/problems/10kindsofpeople)

**Difficulty**: 5.3

## Solution

Rather than come up with some pathfinding (and one fast enough to handle 1000 queries on a 1000x1000 grid in one second!), read in the entire image, and then do some segmentation-processing; iterate over the image (consider every spot initially "unlabeled") and when seeing an unlabelled spot, label it as some group *x*, and recursively label all unlabelled and adjacent spots that are the same value as this value with the same group number. Then, increment *x*. Now, all groups are labelled, for any query, just check whether their groups are the same: "neither" if they aren't, "binary"/"decimal" if they *are*, and are a 0 or 1.
