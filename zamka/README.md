# Zamka

**Problem**: [zamka](https://open.kattis.com/problems/zamka)

**Difficulty**: 1.4

## Solution

Since this is some basic arithmetic, C++ is fast enough to bruteforce calculate this; we need to loop from L to D, get the sum of its digits, and track the minimum and maximum of these seen so far. To get the sum of the digits of a value, we can begin a total at 0, and to get the right-most digit, we take the number and modulo divide by 10, then, we can divide the number by 10 to move the next over; repeat this process until the number == 0.
