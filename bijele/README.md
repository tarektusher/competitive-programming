# Bijele

**Problem**: [bijele](https://open.kattis.com/problems/bijele)

**Difficulty**: 1.3

## Solution

For this one, one can simply hard-code an array of the "ideal" chess set, in the ordering *king*-*queen*-*rook*-*bishop*-*knight*-*pawn* (1, 1, 2, 2, 2, 8) and read in the array of pieces given, and simply output the difference at each point, *standard*[i] minus *given*[i].
