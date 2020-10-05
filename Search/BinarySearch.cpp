#include "Search.h"


int binarySearch(std::vector<int> &arr, int value) {
    int left = 0;
    int right = arr.size();
    int mid;
    while (right - left > 1) {
        mid = left + (right - left) / 2;
        if (arr[mid] > value) {
            right = mid;
        } else {
            left = mid;
        }
    }
    return arr[left]==value ? left : -1;
}