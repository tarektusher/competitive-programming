# Just a Minute

**Problem**: [justaminute](https://open.kattis.com/problems/justaminute)

**Difficulty**: 1.6

## Solution

For this, since the units presented are both minutes and seconds, one can converted the displayed minutes, *N*, into seconds by simply multiplying by 60, and keeping a tally of all the seconds displayed, and the real times, and compare the ratio; if it is skewed to indicate a real\:displayed ratio > 1, display it, otherwise display "measurement error".
