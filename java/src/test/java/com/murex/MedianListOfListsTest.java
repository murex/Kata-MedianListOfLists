/*
Copyright (c) 2021 Murex

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

package com.murex;

import org.junit.Ignore;
import org.junit.Test;

import java.util.List;

import static java.util.Arrays.asList;
import static org.junit.Assert.assertEquals;

public class MedianListOfListsTest {

    @Ignore
    @Test
    public void acceptance_test_with_odd_number_of_values() {
        List<List<Integer>> values = asList(
                asList(1, 42, 7, 49, 18, 97),
                asList(24, 1, 12, 82, 33, 40, 73, 56, 57),
                asList(46, 68, 2, 72));
        assertEquals(42, MedianListOfLists.computeMedian(values), 0);
    }

    @Ignore
    @Test
    public void acceptance_test_with_even_number_of_values() {
        List<List<Integer>> values = asList(
                asList(1, 7, 49, 18, 97),
                asList(24, 1, 12, 82, 33, 41, 73, 56, 57),
                asList(43, 68, 2, 72));
        assertEquals(42, MedianListOfLists.computeMedian(values), 0);
    }

    @Ignore
    @Test
    public void acceptance_test_with_non_integer_median() {
        List<List<Integer>> values = asList(
                asList(1, 7, 49, 18, 97),
                asList(24, 1, 12, 82, 33, 41, 73, 56, 57),
                asList(44, 68, 2, 72));
        assertEquals(42.5, MedianListOfLists.computeMedian(values), 0);
    }
}