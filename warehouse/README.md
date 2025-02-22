# Warehouse

**Problem**: [warehouse](https://open.kattis.com/problems/warehouse)

**Difficulty**: 2.0

## Solution

For each test case, keep a list of all the toys, and a mapping of toy to the number of them arrived (because of multiple shipments of the same toy). After they are all processed, one can loop through all the toys processed, placing a toy with inventory *x* on a list of all the toys also of size *x*. Doing this, keep a list of all the inventory sizes seen. Sort that list in descending order. Then, output *K*, the number of unique toys, and iterate through all the inventory sizes, getting the list of all toys with that amount, sort the list, and output each toy on that list and its size.
