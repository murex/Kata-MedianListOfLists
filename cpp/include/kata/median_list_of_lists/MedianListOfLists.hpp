
#include <kata/median_list_of_lists/config.hpp>

#include <vector>

using ListInt = std::vector<int>;
using List = std::vector<ListInt>;

namespace kata {
namespace median_list_of_lists {

MEDIAN_LIST_OF_LISTS_API float computeMedian(const List& values);

} // namespace median_list_of_lists
} // namespace kata
