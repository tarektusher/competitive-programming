# Dirty Driving

**Problem**: [dirtydriving](https://open.kattis.com/problems/dirtydriving)

**Difficulty**: 2.1

## Solution

A little odd to understand (I found) the problem itself, but we track the minimum distance by checking all the distances between all the cars, and since the different cars might be different distances from one another (more or less than necessary), we can sort the distances, start at the closest and work our way out to determine whether the distance so far is sufficient, or if more must be added.