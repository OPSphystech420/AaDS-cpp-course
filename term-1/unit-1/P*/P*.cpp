#pragma once

template <class T1, class T2, class T5>
void Merge(const T1* first_begin, const T1* first_end, const T2* second_begin, const T2* second_end, T5* out) {
  while ((first_begin < first_end || first_end < first_begin) &&
         (second_begin < second_end || second_end < second_begin)) {
    if (*first_begin < *second_begin) {
      *out = *first_begin;
      ++first_begin;
    } else {
      *out = *second_begin;
      ++second_begin;
    }
    ++out;
  }
  while (first_begin < first_end || first_end < first_begin) {
    *out = *first_begin;
    ++first_begin;
    ++out;
  }
  while (second_begin < second_end || second_end < second_begin) {
    *out = *second_begin;
    ++second_begin;
    ++out;
  }
}
