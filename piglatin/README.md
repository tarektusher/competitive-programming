# Pig Latin

**Problem**: [piglatin](https://open.kattis.com/problems/piglatin)

**Difficulty**: 2.1

## Solution

If the word starts with a vowel, just add "yay" to the end and output it; otherwise, create a queue, and *until a vowel is reached*, enqueue the letters leading up the first vowel. Once a vowel is reached begin outputting the letters instead of queueing them. After the word is finished, output all those previously-queued letters, then output "ay".
