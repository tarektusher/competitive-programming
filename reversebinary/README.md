# Reversed Binary Numbers

**Problem**: [reversedbinary](https://open.kattis.com/problems/reversebinary)

**Difficulty**: 1.5

## Solution

To get the *reversed* binary representation of a number in decimal, one can take a stack (initially empty), and if the number is *even*, we know that the right-most bit is a 0, 1 if it is *odd*, and so we *push* a 0 or 1 respectively. Then, we divide the number by 2. Repeat this until the numebr is equal to 0. After this, the stack contains the reversed binary representation of the number. Then, we keep a *position* (started at 0) and pop a number off the top of the stack: if it is a 1, add 2 ^ *position* to a total (that begins at 0). Always increment positon whether or not the number was a 1.
