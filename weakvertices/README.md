# Weak Vertices

**Problem**: [weakvertices](https://open.kattis.com/problems/weakvertices)

**Difficulty**: 1.6

## Solution

One can read in the matrix, and then loop from 0 to *n*-1 (each vertex *v*, in order), and loop for every vertex *w*, and an inner loop over every other vertex *u*, and if there is a link connection from *v* to *w*, *w* to *u*, and *u* to *v*, exit/skip the rest of the loop, or just mark a boolean somewhere, and after checking, if there was no triangle found as described, output the vertex number (*v*).
