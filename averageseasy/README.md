# Paradox With Averages

**Problem**: [averageseasy](https://open.kattis.com/problems/averageseasy)

**Difficulty**: 2.4

## Solution

For this, simply read in the CS averages (storing them in a vector) as well as add them to a total; compute the average for CS. Read in all the Economics averages and compute the overall average, but you don't need to store the individual numbers. Then, iterate through the list of CS marks, and compute the new averages and compare; if both new averages are better than their respective older averages, incremement some tally. For each of the new averages for a given CS mark, *x*: *new_CS* = ((*old_cs_average* \* *number of CS marks total*) - *x*) / (*number of CS marks total* - 1); *new_Economics* = *old_Economics_average* + ((*x* - *old_Economics_average*) / *number of Economics marks total*).
