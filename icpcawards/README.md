# ICPC Awards

**Problem**: [icpcawards](https://open.kattis.com/problems/icpcawards)

**Difficulty**: 1.4

## Solution

For this, one can keep a map to track whether a given university has a winning team, and as one goes through the list, if the university has not had a winning team, output the university and team, and mark that university in the map. Repeat this until 12 winners have been output. If a university is read in, and has a winning team already, ignore it.
