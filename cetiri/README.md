# Cetiri

**Problem**: [cetiri](https://open.kattis.com/problems/cetiri)

**Difficulty**: 1.8

## Solution

For this, the solution is not too bad if taken case by case. We can sort the 3 numbers, and take the difference between the first and second, and second and third values. If the differences are the same, a value at either end of the list is missing, so we can output *either* the lowest value, minus the difference, or the larger value plus the difference. If they are not the same, a value in the middle of the list is missing, and so we take the smaller difference, and if the smallest value plus the smaller difference is not in the list, this is the missing value, otherwise it is the middle value plus the difference.
