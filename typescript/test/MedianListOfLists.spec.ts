import { computeMedian } from '../src/MedianListOfLists';

describe('median_list_of_lists', () => {

  // Remove the ".skip" below to enable this test case
  describe.skip('acceptance tests', () => {

    test('with odd number of values', () => {
      let values: number[][] = [
        [1, 42, 7, 49, 18, 97],
        [24, 1, 12, 82, 33, 40, 73, 56, 57],
        [46, 68, 2, 72]
      ];
      expect(computeMedian(values)).toEqual(42);
    });

    test('with even number of values', () => {
      let values: number[][] = [
        [1, 7, 49, 18, 97],
        [24, 1, 12, 82, 33, 41, 73, 56, 57],
        [43, 68, 2, 72]
      ];
      expect(computeMedian(values)).toEqual(42);
    });

    test('with non-integer median', () => {
      let values: number[][] = [
        [1, 7, 49, 18, 97],
        [24, 1, 12, 82, 33, 41, 73, 56, 57],
        [44, 68, 2, 72]
      ];
      expect(computeMedian(values)).toEqual(42.5);
    });

  });
});
