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