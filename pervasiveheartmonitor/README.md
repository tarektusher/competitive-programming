# Pervasive Heart Monitor

**Problem**: [pervasiveheartmonitor](https://open.kattis.com/problems/pervasiveheartmonitor)

**Difficulty**: 1.7

## Solution

Since the names can appear before or after the measurements, one has to detect whether (word by word in the line) if it is a name, or a measurement; for this, since the names lack digits, if a word has no digits, it's a name, so store it in the list of names for later. Otherwise, increment a tally of measurements taken, and add this measurement's value to a total somewhere. At the end of the line, output the sum / tally, and the name(s) read in.
