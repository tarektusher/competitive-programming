# Soda Slurper

**Problem**: [sodaslurper](https://open.kattis.com/problems/sodaslurper)

**Difficulty**: 1.6

## Solution

One can add *e* and *f* to be the total number of bottles collected, and *e* / *c* will be the number that Tim can buy, so one stores *e* % *c* (bottles that are not enough to buy another soda), *e* is divided by *c* and added to a total, and the remaining bottles are added back to the total. This is repeated until *e* is no longer >= *c*.
