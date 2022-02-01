# Subject: TDD with algorithm kata

Hi,

Our next dojo will be a kata on TDD with algorithms, in pairs.
TDD does not 'magically' generate non-trivial algorithms.
You'll still need to spend some time up-front to think of an algorithm if you want to avoid a O(n2) or O(exp(n)) complexity.
TDD can help in a different way though.
You can use it to validate that your algorithm works, and then use the tests to refactor your algorithm.

Here is the process (roughly):

1. Think about the algorithm that will solve your problem.
2. Think of an order of tests that will allow you to build this algorithm incrementally.
3. Use TDD to write a crude algorithm that solves your problem, and that can later be re-factored into our target algorithm.
This usually involves laying down the main blocks we will need,
while using very low performance algorithms as much as possible.
4. With the tests in place, refactor the algorithm to what we want.

In order not to waste time during the session, we'd like you to think about the algorithm before.
Here is the problem we will work on:

We have a cluster of machines that each holds a very large list of integers.
We want to get the median of all these numbers, but we cannot bring all the numbers on a single machine.

The central question is: how to compute the median value of a list of lists without concatenating all the lists?
(A Median value does not need to be an element of the list, and can be a float value even if the lists only contain integers).

Happy searching!
