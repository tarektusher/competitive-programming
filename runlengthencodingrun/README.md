# Run-Length Encoding, Run!

**Problem**: [runlengthencodingrun](https://open.kattis.com/problems/runlengthencodingrun)

**Difficulty**: 1.6

## Solution

For decoding) check every second character, starting at the first character (the one to output), and loop the amount of times of the number immediately following, outputting this character. For encoding, one can loop through the string and simply count the occurrences of each character, and output the character and tally as one goes.
