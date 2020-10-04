#ifndef SORTING_SORTING_H
#define SORTING_SORTING_H

#include <iostream>
#include <vector>

void insertionSort(std::vector<int> &arr);
void mergeSort(std::vector<int> &arr, int left, int right);
void merge(std::vector<int> &arr, int left, int mid, int right);

void printingg(std::vector<int> &arr);

#endif //SORTING_SORTING_H
