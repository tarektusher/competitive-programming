# Where's My Internet??

**Problem**: [wheresmyinternet](https://open.kattis.com/problems/wheresmyinternet)

**Difficulty**: 3.6

## Solution

We're finding the *reach* of the network, which can be visualized as a graph. A pair of houses is essentially an edge; create a graph with the connection between two houses as an edge, and do a DFS traversal from house 1, marking any visited houses.
