# Black Friday

**Problem**: [blackfriday](https://open.kattis.com/problems/blackfriday)

**Difficulty**: 2.2

## Solution

For this, keep an array representing the 6 possible sides of a dice, and set them all to a value representing *not seen*. For each person 1 to *n*, if their side of the dice is *not seen*, set it to *seen* and stored the index of the person. If it is already *seen*, set it to *void*. At the end, go from side 6 to side 1, and if any given side is *seen*, output its value and exit early. At the end, output "none", since this will only happen if no one was selected.
