# Not Amused

**Problem**: [notamused](https://open.kattis.com/problems/notamused)

**Difficulty**: 2.1

## Solution

For this, split the input into 3 cases: reset all the tallies of costs and whatnot for "OPEN", store a check in/out for "ENTER"/"EXIT", and evaluate all costs and output all data for "CLOSE". For recording a check in/out, simply note the name if it hasn't been seen, and mark the time on a list of times for this person (a map is helpful, and tracking data this way is acceptable because the problem specifies that there are no mis-reads). For a close, sort the names recorded, and process them in that order. A *cost* starts at 0, and one can go through the times recorded for this person, and take every pair of numbers, and add the difference to the *cost*. After this is done, output the cost \* $0.10.
