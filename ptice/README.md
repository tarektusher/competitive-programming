# Ptice

**Problem**: [ptice](https://open.kattis.com/problems/ptice)

**Difficulty**: 1.4

## Solution

Start a total (for correct answers) for each person at 0, and loop through the string, and compare that character to the string of the pattern for each person ("ABC", "BABC", "CCAABB") by modulo dividing by the position of the character into the person's string, to see what they would pick for that question, and increment their tally if it is correct. Get the max of the 3 tallies, output it, and then check each person's score (in alphabetical order) and output their name if their score is equal to the max.
