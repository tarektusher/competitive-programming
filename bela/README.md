# Bela 

**Problem**: [bela](https://open.kattis.com/problems/bela)

**Difficulty**: 1.3

## Solution

One can build two maps (for dominant and non-dominant values), and then loop over the *4N* hands, and by reading the 2nd character to determine suit (*B*), add the appropriate value of the 1st character to a running total by performing a lookup based on whether it is or is not dominant.
