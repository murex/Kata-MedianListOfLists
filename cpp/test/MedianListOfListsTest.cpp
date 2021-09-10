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


#include <kata/median_list_of_lists/MedianListOfLists.hpp>

#include <gtest/gtest.h>

using namespace com::murex::kata::median_list_of_lists;

TEST(MedianListOfLists, DISABLED_acceptance_test_with_odd_number_of_values)
{
   List values =
   {
      {1, 42, 7, 49, 18, 97},
      {24, 1, 12, 82, 33, 40, 73, 56, 57},
      {46, 68, 2, 72}
   };
   EXPECT_EQ(42, computeMedian(values));
}

TEST(MedianListOfLists, DISABLED_acceptance_test_with_even_number_of_values)
{
   List values =
   {
      {1, 7, 49, 18, 97},
      {24, 1, 12, 82, 33, 41, 73, 56, 57},
      {43, 68, 2, 72}
   };
   EXPECT_EQ(42, computeMedian(values));
}

TEST(MedianListOfLists, DISABLED_acceptance_test_with_non_integer_median)
{
   List values =
   {
      {1, 7, 49, 18, 97},
      {24, 1, 12, 82, 33, 41, 73, 56, 57},
      {44, 68, 2, 72}
   };
   EXPECT_EQ(42.5, computeMedian(values));
}
