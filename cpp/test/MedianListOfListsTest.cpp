
#include <kata/median_list_of_lists/MedianListOfLists.hpp>

#include <gtest/gtest.h>

using namespace ::kata::median_list_of_lists;

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
