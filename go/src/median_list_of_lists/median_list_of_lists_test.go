/*
Copyright (c) 2022 Murex

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

package median_list_of_lists

import (
	"github.com/stretchr/testify/assert"
	"testing"
)

func Test_acceptance_test(t *testing.T) {
	t.Skip("test currently disabled") // Comment or remove this line to enable this test case

	tests := []struct {
		name     string
		values   [][]int
		expected float64
		delta    float64
	}{
		{
			"with odd number of values",
			[][]int{
				{1, 42, 7, 49, 18, 97},
				{24, 1, 12, 82, 33, 40, 73, 56, 57},
				{46, 68, 2, 72},
			},
			42,
			0,
		},
		{
			"with even number of values",
			[][]int{
				{1, 7, 49, 18, 97},
				{24, 1, 12, 82, 33, 41, 73, 56, 57},
				{43, 68, 2, 72},
			},
			42,
			0,
		},
		{
			"with non-integer median",
			[][]int{
				{1, 7, 49, 18, 97},
				{24, 1, 12, 82, 33, 41, 73, 56, 57},
				{44, 68, 2, 72},
			},
			42.5,
			0,
		},
	}

	for _, test := range tests {
		t.Run(test.name, func(t *testing.T) {
			assert.InDelta(t, test.expected, computeMedian(test.values), test.delta)
		})
	}
}
