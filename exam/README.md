# Exam

**Problem**: [exam](https://open.kattis.com/problems/exam)

**Difficulty**: 1.9

## Solution

For this, count how many answers between the exams *match*, and how many *differ*. First, the fewer of either *k* or *the total matches* can all be correct. Second, the fewer of either the number *different*, or the number the friend has gotten *wrong*. This makes sense, since one can count every answer that is the same as the friend's, up to the maximum they got correct and match. The remaining ones that differ can also count, as long as the friend got them wrong.
