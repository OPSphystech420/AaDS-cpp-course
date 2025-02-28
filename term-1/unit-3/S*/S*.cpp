#pragma once
#include <iostream>

template <typename T>

void PushHeap(T *begin, T *end) {
  int i = end - 1 - begin;
  int parent = (i - 1) / 2;
  while (0 < parent) {
    if (*(begin + parent) < *(begin + i)) {
      std::swap(*(begin + i), *(begin + parent));
      i = parent;
      parent = (i - 1) / 2;
    } else {
      return;
    }
  }
  if (i <= 2) {
    if (*(begin) < *(begin + i)) {
      std::swap(*(begin), *(begin + i));
    }
  }
}

template <typename T>

void PopHeap(T *begin, T *end) {
  std::swap(*(begin), *(end - 1));
  int i = 0;
  int l = 2 * i + 1;
  int r = 2 * i + 2;
  while (l < end - begin - 1) {
    if (r >= end - begin - 1) {
      if (*(begin + i) < *(begin + l)) {
        std::swap(*(begin + i), *(begin + l));
        return;
      }
      return;
    }
    int i2 = *(begin + l) < *(begin + r) ? r : l;
    if ((*(begin + i)) < (*(begin + i2))) {
      std::swap(*(begin + i), *(begin + i2));
      i = i2;
      l = 2 * i + 1;
      r = 2 * i + 2;
    } else {
      break;
    }
  }
}
