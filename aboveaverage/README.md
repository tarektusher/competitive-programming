# Above Average

**Problem**: [aboveaverage](https://open.kattis.com/problems/aboveaverage)

**Difficulty**: 2.0

## Solution

This one is straightforward, and more practice getting comfortable with C++ than anything. Take the first number, and loop that many times (for each test case). In each test case, take the first number and set up and array of that size, since that is the class size. As we loop through the remaining numbers, we can do a little bookkeeping along the way to save some work calculating the average later; save a mark m~i~ to the *i*th position of that array, as if it represents that particular student, but also
add the mark to a total (initialized to 0). After this, we can simply divide the total by the class size (which we have), and can just loop through all those marks we saved and compare to see how many are larger than the average we calculated.