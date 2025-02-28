#pragma once

template <class RandomIt, class T>

bool BinarySearch(RandomIt begin, RandomIt end, T &value) {

  while (begin < end) {
    T *mid = begin + (end - begin) / 2;
    if (*mid < value) {
      begin = mid + 1;
    } else if (value < *mid) {
      end = mid;
    } else {
      return true;
    }
  }
  return false;
}

template <class RandomIt, class T>

RandomIt LowerBound(RandomIt begin, RandomIt end, T &value) {

  while (begin < end) {
    T *mid = begin + (end - begin) / 2;
    if (*mid < value) {
      begin = mid + 1;
    } else {
      end = mid;
    }
  }
  return begin;
}

template <class RandomIt, class T>

RandomIt UpperBound(RandomIt begin, RandomIt end, T &value) {

  while (begin < end) {
    T *mid = begin + (end - begin) / 2;
    if ((*mid < value) || !(*mid < value || value < *mid)) {
      begin = mid + 1;
    } else {
      end = mid;
    }
  }
  return begin;
}

