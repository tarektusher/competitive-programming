# Skocimis

**Problem**: [skocimis](https://open.kattis.com/problems/skocimis)

**Difficulty**: 1.6

## Solution

Since an outer kangaroo always jumps "in", the kangaroo that should jump should jump into the large gap, so *A* should jump to the far-right of the *B*-*C* gap if it is larger, or *C* as far-left in the *A*-*B* gap if it is bigger. Since the outer kangaroos jump to the far end of the gap, every position in the gap (from before any jumps are made) will be filled, the number of moves is simply the amount of gaps between the kangaroos who enclose this gap. So, the number of moves is *X*-*Y* - 1, where *X* and *Y* are either *A* and *B*, or *B* and *C*, whichever have a larger difference.
