# GlitchBot

**Problem**: [glitchbot](https://open.kattis.com/problems/glitchbot)

**Difficulty**: 1.9

## Solution

For this, take the list of instructions, and consider, for each instruction, the two other instructions possible. Simply build a subroutine that takes instructions and returns the resulting location, and find some way to replace one instruction with another. Try the first instruction, replacing it in two separate runs with the other two options, and if either end up at the correct location, output the index and replaced instruction, otherwise move on to the next.
