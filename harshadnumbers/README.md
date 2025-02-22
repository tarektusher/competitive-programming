# Harshad Numbers

**Problem**: [harshadnumbers](https://open.kattis.com/problems/harshadnumbers)

**Difficulty**: 1.4

## Solution

Making a helper function to compute the sum of the digits of a number can be helpful. A recursive identity to calculate this sum of a number *x* can be (*x* % 10) + sumOfDigits(*x* / 10), and the divisibility described implies that *x* % sumOfDigits(*x*) == 0, so one can simply run a loop starting at the given number *n*, and until this condition (*n* % sumOfDigits(*n*) == 0) is true, increment *n*. After this loop is done, output *n*.
