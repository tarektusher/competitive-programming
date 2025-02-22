# Firefly

**Problem**: [firefly](https://open.kattis.com/problems/firefly)

**Difficulty**: 4.4

## Solution

Since the problem is about the fewest number of stalactites/stalagmites to go through at one specific height, the problem is about overlaying all the stalactities/stalagmites on top of one another. One can consider a single array/vector, with each index representing a height in the cave, and when give a height, mark those corresponding components in the cave-vector. This would be too slow to increment every positon for every value read in (worst-case: a pass through the entire height of the cave for every value), so one can keep two vectors: the stalactite heights and stalagmite heights, and mark only the tip of the structure in the respective array. After this is done, repeat this process for both vectors: start at the "end" of the array, keep a tally (initialized to 0), and working one's way down the array, add the tally to the positon of the array, and then set the tally to the value at this positon. This way, one can have a kind of rolling tally to mark the total structures at each positon in one pass (for each, stalactites and stalagmites). Then, loop through from 0 to *H*-1, checking the total stalactites and stalagmites at each height, and keeping a minimum and counter.
