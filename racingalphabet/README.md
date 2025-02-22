# Racing Around the Alphabet

**Problem**: [racingalphabet](https://open.kattis.com/problems/racingalphabet)

**Difficulty**: 1.5

## Solution

For this one, implementation may be a bit harder than understanding the problem itself. For this one, one can track the positions in this aphorism however (I used a map), and label them such that A = 0, ' = 27, and begin a cursor at the first letter of the given message, and check the distance between the current position and target, take the absolute value of the difference, and if the distance is larger than 1/2 the size of the aphorism, take the real distance to be (*size of aphorism* minus *distance*), since this would be considered going the "other", faster way. Add this to a tally, and move the cursor to the character reached, repeat all of this for the entire line. To convert this total distance to the time, if one considers the distance so far to be figurative "steps", then the true distance moved must be a conversion into feet, which will be to multiply this by (60 (the diameter) \* PI) (some basic trig), which gets the feet, then divide by 15 (feet per second).
 