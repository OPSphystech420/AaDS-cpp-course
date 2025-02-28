#pragma once

template <typename T>

void Sort(T *begin, T *end) {
  if (end - begin <= 1) {
    return;
  }
  T *middle = begin + (end - begin) / 2;
  Sort(begin, middle);
  Sort(middle, end);
  T *buffer = new T[end - begin];
  T *left = begin;
  T *right = middle;
  for (int i = 0; i < end - begin; ++i) {
    if (!(left < middle || middle < left)) {
      buffer[i] = *right;
      ++right;
    } else if (!(right < end || end < right)) {
      buffer[i] = *left;
      ++left;
    } else if (*left < *right) {
      buffer[i] = *left;
      ++left;
    } else {
      buffer[i] = *right;
      ++right;
    }
  }
  for (int i = 0; i < end - begin; ++i) {
    begin[i] = buffer[i];
  }
  delete[] buffer;
}
