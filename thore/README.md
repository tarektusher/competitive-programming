# Thore's self-esteem

**Problem**: [thore](https://open.kattis.com/problems/thore)

**Difficulty**: 4.3

## Solution

For this, one can read in all the names into a list, and then simply check the various cases described in the ``Output`` section of the problem. First, check if ThoreHusfeldt is first. Second, loop through the names and check if the name is "ThoreHusfeldt", and if it is, exit the loop; otherwise, if the name contains "ThoreHusfeld", output "Thore sucks". Otherwise, find Thore's position in the scoreboard, and loop over all names before this position with a substring of "ThoreHusfeldt" (first, "T", then "Th") until a pass can be completed in which the substring does not appear anywhere in any name above Thore's. Then, output that substring.
