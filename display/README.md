# Digital display

**Problem**: [display](https://open.kattis.com/problems/display)

**Difficulty**: 2.4

## Solution

This one feels like a bit of a time waster, converting each number to its digital version. For this, make a list of lists, where each main list is a number converted to its digital form, and the sublists are each row of text for that number converted (don't forget to do one for the ":"). Then, loop from 1 to 7 and for each horizontal row, print the corresponding sublist for each of the four numbers given, with the colon in the middle.
