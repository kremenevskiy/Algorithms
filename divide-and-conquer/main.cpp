#include <iostream>
#include "algorithms.h"

int main() {
//    std::vector<int> a {34, 4, -1, 10, -23};
    std::vector<int> a {1, -23, 323, 12, -21, -12, -122, 2134, -124};
    std::tuple<int, int, int> findMaxSubArrSum = findMaximumSubArray(a, 0, a.size());
    int leftBorder = std::get<0>(findMaxSubArrSum);
    int rightBorder = std::get<1>(findMaxSubArrSum);
    int maxSum = std::get<2>(findMaxSubArrSum);

    std::cout << "Subarray is: arr[" << leftBorder << "] - arr[" << rightBorder << "] - with sum: " << maxSum << '\n';

    return 0;
}
