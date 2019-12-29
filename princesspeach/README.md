# Saving Princess Peach

**Problem**: [princesspeach](https://open.kattis.com/problems/princesspeach)

**Difficulty**: 1.8

## Solution

For this, one takes in *N* and *Y*, and looping *Y* times, read in the next values, which are the obstacles found. If the obstace is not already found (potential duplicate obstacles), increment a tally of unique obstacles, and either way, mark that this obstacle was found. Then, from 0 to *N*-1, check if this respective obstacle was found, and output the number if not. Then, the message "Mario got <\unique> of the dangerous obstacles."