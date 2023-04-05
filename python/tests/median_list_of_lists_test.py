import pytest
from pytest import approx
from parametrization import Parametrization
from median_list_of_lists.median_list_of_lists import compute_median


class TestListOfLists:

    @pytest.mark.skip(reason="test currently disabled")  # Comment or remove this line to enable this test case
    @Parametrization.autodetect_parameters()
    @Parametrization.case(
        name="with odd number of values",
        values=[
            [1, 42, 7, 49, 18, 97],
            [24, 1, 12, 82, 33, 40, 73, 56, 57],
            [46, 68, 2, 72],
        ],
        expected=42,
        delta=0,
    )
    @Parametrization.case(
        name="with even number of values",
        values=[
            [1, 7, 49, 18, 97],
            [24, 1, 12, 82, 33, 41, 73, 56, 57],
            [43, 68, 2, 72],
        ],
        expected=42,
        delta=0,
    )
    @Parametrization.case(
        name="with non-integer median",
        values=[
            [1, 7, 49, 18, 97],
            [24, 1, 12, 82, 33, 41, 73, 56, 57],
            [44, 68, 2, 72],
        ],
        expected=42.5,
        delta=0,
    )
    def test_acceptance_tests(self, values, expected, delta) -> None:
        assert (compute_median(values) == approx(expected, abs=delta))
