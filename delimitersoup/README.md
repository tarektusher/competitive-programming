# Delimiter Soup 

**Problem**: [delimitersoup](https://open.kattis.com/problems/delimitersoup)

**Difficulty**: 1.9

## Solution

Create a mapping between the pairs of braces: "(" to ")", etc. And when we read each character, do nothing if it's a space, push the character if it's a left bracket; if it's a right bracket, pop the top of the stack. If the stack is actually empty, or they do not match, output the read bracket and index / number read.