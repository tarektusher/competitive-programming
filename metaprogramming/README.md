# Metaprogramming

**Problem**: [metaprogramming](https://open.kattis.com/problems/metaprogramming)

**Difficulty**: 2.4

## Solution

For this, keep two maps: one for a boolean of whether a term has been defined, and one for a string->integer definition for each term. For every case, read in the first word and check if it is "define" or "eval". For define, read in the integer *i* and string *x*. Define *x*, and mark that it is *been* defined. For eval, read in the *x*, *y*, *z*. If either *x* or *z* are *not* defined, output "undefined" and continue. Otherwise, check *y* for "=", "<", or ">", and output the respective comparison, going off of what the terms are currently defined as.
