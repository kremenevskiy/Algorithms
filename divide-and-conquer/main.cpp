#include <iostream>
#include "algorithms.h"

int main() {
//    std::vector<int> a {34, 4, -1, 10, -23};
    std::vector<int> a {1, 2, -1};
    std::cout << std::get<2>(findMaximumSubArray(a, 0, a.size()));

    return 0;
}
