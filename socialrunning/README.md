# Social running

**Problem**: [socialrunning](https://open.kattis.com/problems/socialrunning)

**Difficulty**: 2.1

## Solution

For this, since the first runner will have to run their first section alone, and the last runner will run their *last* section alone, one can simulate the distances each runner will run. Try each runner as the "first" runner, and the runner behind them is the "last" runner. Add the first runner's first distance, and the last runner's last distance, and this is the distance that people will run alone in this configuration.
