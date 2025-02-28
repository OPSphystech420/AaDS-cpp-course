#pragma once
#include <iostream>

template <typename RandomIt>

void KthElement(RandomIt *begin, RandomIt *kth, RandomIt *end) {
  RandomIt pivot_value = *begin;
  RandomIt *begin2 = begin;
  int c = 0;
  int i = 1;
  int j = end - begin2 - 1;
  while ((0 < j - i) || !(0 < j - i || j - i < 0)) {
    while (i < end - begin2 && *(begin2 + i) < pivot_value) {
      ++i;
      ++c;
    }
    while (j >= 0 && ((pivot_value < *(begin2 + j)) || !(pivot_value < *(begin2 + j) || *(begin2 + j) < pivot_value))) {
      --j;
    }
    if (i >= j) {
      break;
    }
    std::swap(*(begin2 + j), *(begin2 + i));
    ++c;
    --j;
    ++i;
  }
  std::swap(*(begin2), *(begin2 + c));
  RandomIt *pivot = begin2 + c;
  if ((end - begin < 2) || !(end - begin < 2 || 2 < end - begin)) {
    return;
  }
  if (!(pivot < kth || kth < pivot)) {
    return;
  }
  if (kth < pivot) {
    KthElement(begin, kth, pivot);
  } else {
    KthElement(pivot + 1, kth, end);
  }
}

