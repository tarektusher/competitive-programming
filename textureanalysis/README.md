# Texture Analysis

**Problem**: [textureanalysis](https://open.kattis.com/problems/textureanalysis)

**Difficulty**: 2.4

## Solution

For this, eliminate easy cases by checking; if there is no "." anywhere in the string, it's even. Otherwise, take the largest prefix of the string such that it consists of "*" and some number of consecutive "."s. Then, jumping ahead in the string by the length of this constructed string; these overlapping substrings must match. Repeat this until the end of the string.
