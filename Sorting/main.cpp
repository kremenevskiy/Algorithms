#include <iostream>
#include <vector>
#include <ctime>

#include "Sorting.h"

void fillArr(std::vector<int> &arr);
void fillArr(std::vector<int> &arr, const std::vector<int> &newArr);
void printArr(const std::vector<int> &arr);

int main() {
    srand(time(nullptr));

    std::vector<int> array(10);
    fillArr(array, {31, 41, 59, 26, 41, 58});
    printArr(array);
    insertionSort(array);
    printArr(array);


    return 0;
}





void fillArr(std::vector<int> &arr) {
    for (auto & el : arr) {
        el = rand() % arr.size();
    }
}


void fillArr(std::vector<int> &arr, const std::vector<int> &newArr) {
    arr.resize(newArr.size());
    int i = 0;
    for (auto & el : newArr) {
        arr[i++] = el;
    }
}


void printArr(const std::vector<int> &arr) {
    for(auto &el : arr) {
        std::cout << el << ' ';
    }
    std::cout << '\n';
}
