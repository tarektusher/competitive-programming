# Mastering Mastermind

**Problem**: [mastermind](https://open.kattis.com/problems/mastermind)

**Difficulty**: 2.5

## Solution

For this, read in the 2 strings, and keep 2 empty strings that will store the character for non-matches. Loop through the two strings together, and increment r if they match; otherwise, push the character from the code to the first string, the character from the code to the second string. After this, while the first string is not empty, search for a character from it in the second string; if found, increment s and delete it from the second string. Delete it from the first string either way. After this, output r and s.
