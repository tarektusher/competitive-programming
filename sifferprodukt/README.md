# Digit Product

**Problem**: [sifferprodukt](https://open.kattis.com/problems/sifferprodukt)

**Difficulty**: 1.5

## Solution

For this, since the only way to be "done" is when the number is a single digit, read in *x*, and while it is >= 10, transform it into the result of one application of this process, and repeat until it is a single digit. One application of this product would be to initialize some result value to *1*, and copy *x* to *y*. To get the right-most digit of *y*, take *y* % 10, and if it is non-zero, multiple that result value by this number. If it is not, do nothing. Divide *y* by 10, and repeat this set of steps until *y* == 0. The result value is now the result of multiplying all the non-zero digits together. Alternatively, one could cast the value as a string and do some indexing along the string, but that may be unnecessary; it would likely be a very clean one-liner in a language like Python, though.
