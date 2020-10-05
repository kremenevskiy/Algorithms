#include <iostream>
#include "Search.h"

int main() {

    std::vector<int> arr {1, 2, 3, 5, 7, 8};
    std::cout << binarySearch(arr, 7);
    return 0;
}
