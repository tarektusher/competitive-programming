# Trik

**Problem**: [trik](https://open.kattis.com/problems/trik)

**Difficulty**: 1.4

## Solution

For this one, one can start the *ball* at 1, and for each move it reads in from the string (*A*, *B*, or *C*), *if the ball actually is at one of the two positions involved*, swap them. The precondition is necessary to prevent moving the ball around for a move where the ball is not actually in one of the cups.
