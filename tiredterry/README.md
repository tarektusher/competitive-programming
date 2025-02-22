# Tired Terry

**Problem**: [tiredterry](https://open.kattis.com/problems/tiredterry)

**Difficulty**: 3.0

## Solution

For this one, one needs to sum the tallies of the characters in the slice of *i* to *p* for "W" and "Z", and always check if the tally for "Z" is strictly less than *d*. One needs to go faster than to actually recount at every possible interval (which loops around after the end back to the start of the sleep pattern, which can be handled with some modulo division into the string), since there is only one new character at the end, and one character being removed at the start. For a speedup, one can count every character for the first iteration, and then only count the new character being inserted, and remove the character at the start of the interval to keep track more efficiently.
