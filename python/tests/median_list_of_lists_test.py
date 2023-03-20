import unittest

from parameterized import parameterized
from median_list_of_lists.median_list_of_lists import compute_median


class MedianListOfListsTest(unittest.TestCase):

    @parameterized.expand([
        ("with odd number of values", [
            [1, 42, 7, 49, 18, 97],
            [24, 1, 12, 82, 33, 40, 73, 56, 57],
            [46, 68, 2, 72],
        ], 42, 0),
        ("with even number of values", [
            [1, 7, 49, 18, 97],
            [24, 1, 12, 82, 33, 41, 73, 56, 57],
            [43, 68, 2, 72],
        ], 42, 0),
        ("with non-integer median", [
            [1, 7, 49, 18, 97],
            [24, 1, 12, 82, 33, 41, 73, 56, 57],
            [44, 68, 2, 72],
        ], 42.5, 0),
    ])
    @unittest.skip("test currently disabled")  # Comment or remove this line to enable this test case
    def test_acceptance_tests(self, _name, values, expected, delta):
        self.assertAlmostEqual(expected, compute_median(values), None, None, delta)


if __name__ == "__main__":
    unittest.main()
