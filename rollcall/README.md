# Roll Call

**Problem**: [rollcall](https://open.kattis.com/problems/rollcall)

**Difficulty**: 2.4

## Solution

First, read in all the names, tracking the number of occurrences of first name. Defining your own sorting predicate can be handy for a problem such as this. For this, first compare on last name, and sort by that, but if the last names are the same, sort by first name. Sort the names. Then, output every name, doing the first name, and also the last name if there are multiple occurrences of that first name.