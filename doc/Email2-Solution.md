# Subject: Algorithm for Median of List of Lists Kata

Hi,

As promised, here it is.
The definition of a median is that there are as many values that are greater as values that are smaller.
A simple way to find the median, is to search for a value that fits the definition by asking for the count
of greater and smaller values to all lists, and then summing.

Here is a starting skeleton of the algorithm, that leaves place for incremental optimizations:

    List<List<int>> values = ...

    isMedian = function(n) {
        totalCountSmaller = sum(countSmaller(n, values[0]), countSmaller(n, values[1]), countSmaller(n, values[2]), ...)
        totalCountGreater = sum(countGreater(n, values[0]), countGreater(n, values[1]), countGreater(n, values[2]), ...)
        return totalCountSmaller == totalCountGreater
    }

    maxValue = max(max(values[0]), max(values[1]), max(values[2]), ...)
    minValue = min(min(values[0]), min(values[1]), min(values[2]), ...)

    return findByPredicateBetween(minValue, maxValue, isMedian)

At first, we can implement all the bricks (min, max, findByPredicateBetween, countSmaller, countGreater)
in a very basic brute force way.

The optimizations we can later do are:

- Use a dichotomous search
- Sort the lists to speed up max and min
- Use a binary search for countSmaller and countGreater
- Compute countSmaller and countGreater in the single call (remember the lists are supposed to be on a different machine)
- Parallelize the computations happening on the different lists (BONUS: how to abstract this to keep the unit tests deterministic and single threaded?)

During the dojo, the first step will be to pick the tests in the right order to quickly reach a working
(but slow) algorithm that looks like our skeleton.
The rest of the dojo will be about incrementally optimizing the different bricks.

See you!
