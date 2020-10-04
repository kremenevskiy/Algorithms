#include "Sorting.h"

void mergeSort(std::vector<int> &arr, int left, int right) {
    int mid = left + (right - left) / 2;
    if (right - left > 1) {
        mergeSort(arr, left, mid);
        mergeSort(arr, mid, right);
        merge(arr, left, mid, right);
    }
}


void merge(std::vector<int> &arr, int left, int mid, int right) {
    int size_left = mid - left;
    int size_right = right - mid ;
    std::vector<int> L(size_left);
    std::vector<int> R(size_right);

    for (int i = 0; i < size_left; ++i) {
        L[i] = arr[left + i];
    }
    for(int j = 0; j < size_right; ++j) {
        R[j] = arr[mid + j];
    }

    int i = 0, j = 0, k = left;
    while (i < size_left && j < size_right) {
        if (L[i] < R[j]) {
            arr[k] = L[i];
            ++i;
            ++k;
        } else {
            arr[k] = R[j];
            ++j;
            ++k;
        }
    }

    while (i < L.size()) {
        arr[k] = L[i];
        ++i;
        ++k;
    }
    while (j < R.size()) {
        arr[k] = R[j];
        ++j;
        ++k;
    }
}
