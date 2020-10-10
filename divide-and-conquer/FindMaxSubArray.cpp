#include "algorithms.h"
std::tuple<int, int, int> findMaxCrossingSubArray(const std::vector<int> & array, int left, int right);

std::tuple<int, int, int> findMaximumSubArray(const std::vector<int> & array, int left, int right) {

    if (right - left <= 1) {
        return std::make_tuple(left, right - 1, array[left]);
    }

    int mid = left + (right - left) / 2;
    std::tuple<int, int, int> leftPart = findMaximumSubArray(array, left, mid);
    std::tuple<int, int, int> rightPart = findMaximumSubArray(array, mid, right);
    std::tuple<int, int, int> crossingPart = findMaxCrossingSubArray(array, left, right);

    int leftSum = std::get<2> (leftPart);
    int rightSum = std::get<2> (rightPart);
    int crossingSum = std::get<2> (crossingPart);

    if (leftSum >= rightSum && leftSum >= crossingSum) {
        return std::make_tuple(std::get<0>(leftPart), std::get<1>(leftPart), leftSum);
    }
    else if (rightSum > leftSum && rightSum > crossingSum) {
        return std::make_tuple(std::get<0>(rightPart), std::get<1>(rightPart), rightSum);
    }
    else {
        return std::make_tuple(std::get<0>(crossingPart), std::get<1>(crossingPart), crossingSum);
    }

}


std::tuple<int, int, int> findMaxCrossingSubArray(const std::vector<int> & array, int left, int right) {
    int sum{};
    int leftBorder{};
    int rightBorder{};
    int leftSum{INT_MIN};
    int rightSum{INT_MIN};

    int mid = left + (right - left) / 2;
    for(int i = mid - 1; i >= 0; --i){
        sum += array[i];
        if (sum > leftSum) {
            leftSum = sum;
            leftBorder = i;
        }
    }

    sum = 0;
    for(int i = mid; i <= right; ++i) {
        sum += array[i];
        if (sum > rightSum) {
            rightSum = sum;
            rightBorder = i;
        }
    }
    if (leftSum == INT_MIN) {
        return std::make_tuple(leftBorder, rightBorder, rightSum);
    }
    if (rightSum == INT_MIN) {
        return std::make_tuple(leftBorder, rightBorder, leftSum);
    }
    return std::make_tuple(leftBorder, rightBorder, leftSum + rightSum);
}