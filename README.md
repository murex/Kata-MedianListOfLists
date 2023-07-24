[![Gradle](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/gradle.yml/badge.svg)](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/gradle.yml)
[![Maven](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/maven.yml/badge.svg)](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/maven.yml)
[![CMake](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/cmake.yml/badge.svg)](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/cmake.yml)
[![Go](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/go.yml/badge.svg)](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/go.yml)
[![Pytest](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/pytest.yml/badge.svg)](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/pytest.yml)
[![Npm](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/npm.yml/badge.svg)](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/npm.yml)
[![Check Markdown links](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/markdown-link-check.yml/badge.svg)](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/markdown-link-check.yml)
[![Add contributors](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/contributors.yml/badge.svg)](https://github.com/murex/Kata-MedianListOfLists/actions/workflows/contributors.yml)

# Median of a List of Lists (with no concatenation)

![Kata Image](images/CPU.jpg) <br>
"[CPU Heat Sink](https://unsplash.com/photos/nLFqr9Mr9H8)" by [Michael Dziedzic](https://unsplash.com/@lazycreekimages) is licenced under [Unsplash License](https://unsplash.com/license)

## Description

This kata focuses on practicing TDD with algorithms. 

TDD does not 'magically' generate non-trivial algorithms.

TDD can help in a different way though. You can use it to validate that your algorithm works, and then use the tests to refactor your algorithm. 

Here is the process (roughly):

1. Think about the algorithm that will solve your problem.
2. Think of an order of tests that will allow you to build this algorithm incrementally.
3. Use TDD to write a crude algorithm that solves your problem, and that can later be re-factored into our target algorithm.
   This usually involves laying down the main blocks we will need,
   while using very low performance algorithms as much as possible.
4. With the tests in place, refactor the algorithm to what we want.

### Part 1 - Solving the Problem 

#### Problem Description 

We have a cluster of machines that each holds a very large list of integers.
We want to get the median of all these numbers, but we cannot bring all the numbers on a single machine.

The central question is: how to compute the median value of a list of lists without concatenating all the lists?
(A Median value does not need to be an element of the list, and can be a float value even if the lists only contain integers).

#### Possible Solution

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

### Part 2 - Code Optimization

The current solution is working, but it is slow! 
Your task now is to reach a faster solution! Therefore, do not attempt this step before completing part 1 (with a greedy solution).

For this, we will be using two techniques:   
1. Big(O) analysis of each function 
2. Code profiling: For this technique, you rely on tools to help you analyze the space and time complexity of your program. 
Refer to the below pages for more details:  
   - [Java](java/PROFILING.md)
   - [C++](cpp/PROFILING.md)
   - [Go](go/PROFILING.md)
   - [Python](python/PROFILING.md)
   - [Typescript](typescript/PROFILING.md)

#### Detailed Steps 

Here are the steps we suggest you follow:
1. Introduce a benchmark test
2. Do a big(O) analysis. For each function, compute the Big(O) (comment the result at the top of the function)
3. Run the profiler and compare the result to the results you got from the previous step.
4. Based on the analysis you've done in previous steps, think of optimizations you can do 
5. Apply the optimizations 
6. Re-run the profiler and analyze the output. Was there any improvement in time? 
7. Plan further possible optimization (if any)
8. Repeat steps 4-7 

#### Possible Optimizations

- Use a dichotomous search
- Sort the lists to speed up max and min
- Use a binary search for countSmaller and countGreater
- Compute countSmaller and countGreater in a single call (remember the lists are supposed to be on a different machine)
- Parallelize the computations happening on the different lists (BONUS: how to abstract this to keep the unit tests deterministic and single threaded?)

## Getting Started

- [Java](java/GETTING_STARTED.md)
- [C++](cpp/GETTING_STARTED.md)
- [Go](go/GETTING_STARTED.md)
- [Python](python/GETTING_STARTED.md)
- [Typescript](typescript/GETTING_STARTED.md)

## Session Quick Retrospective

You can fill it from [here](QuickRetrospective.md)

## Useful Links

### For this Kata

- [Wikipedia - Median](https://en.wikipedia.org/wiki/Median)
- [Online Median Calculator](https://www.easycalculation.com/statistics/median-calculator.php)
- [Another One](http://www.alcula.com/calculators/statistics/median/)

### General

- [TCR (Test && Commit || Revert) wrapper](tcr/TCR.md) utility
- Collaborative timer for pairing or mobbing:
  [mobti.me](https://mobti.me/)
  or [agility timer](https://agility.jahed.dev/)

## Session Information

### Style & Duration

- 2-hour [Randori in Pairs](doc/RandoriInPairs.md)

### Topic

- TDD on algorithms

### Focus Points

- Acceptance tests
- Greedy or not?
- ⚠ Premature optimization

### Source Files

- [Java](java)
- [C++](cpp)
- [Go](go)
- [Python](python)
- [Typescript](typescript)

## License

`Kata-MedianListOfLists` and the accompanying materials are made available
under the terms of the [MIT License](LICENSE.md) which accompanies this
distribution, and is available at the [Open Source site](https://opensource.org/licenses/MIT)

## Acknowledgements

See [ACKNOWLEDGEMENTS.md](ACKNOWLEDGEMENTS.md) for more information.

## Contributors

<table>
<tr>
    <td align="center" style="word-wrap: break-word; width: 150.0; height: 150.0">
        <a href=https://github.com/mengdaming>
            <img src=https://avatars.githubusercontent.com/u/1313765?v=4 width="100;"  style="border-radius:50%;align-items:center;justify-content:center;overflow:hidden;padding-top:10px" alt=Damien Menanteau/>
            <br />
            <sub style="font-size:14px"><b>Damien Menanteau</b></sub>
        </a>
    </td>
    <td align="center" style="word-wrap: break-word; width: 150.0; height: 150.0">
        <a href=https://github.com/aatwi>
            <img src=https://avatars.githubusercontent.com/u/11088496?v=4 width="100;"  style="border-radius:50%;align-items:center;justify-content:center;overflow:hidden;padding-top:10px" alt=Ahmad Atwi/>
            <br />
            <sub style="font-size:14px"><b>Ahmad Atwi</b></sub>
        </a>
    </td>
    <td align="center" style="word-wrap: break-word; width: 150.0; height: 150.0">
        <a href=https://github.com/philou>
            <img src=https://avatars.githubusercontent.com/u/23983?v=4 width="100;"  style="border-radius:50%;align-items:center;justify-content:center;overflow:hidden;padding-top:10px" alt=Philippe Bourgau/>
            <br />
            <sub style="font-size:14px"><b>Philippe Bourgau</b></sub>
        </a>
    </td>
    <td align="center" style="word-wrap: break-word; width: 150.0; height: 150.0">
        <a href=https://github.com/AntoineMx>
            <img src=https://avatars.githubusercontent.com/u/77109701?v=4 width="100;"  style="border-radius:50%;align-items:center;justify-content:center;overflow:hidden;padding-top:10px" alt=AntoineMx/>
            <br />
            <sub style="font-size:14px"><b>AntoineMx</b></sub>
        </a>
    </td>
</tr>
</table>
