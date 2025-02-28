#include <iostream>

int64_t Merge(int *a, int *result, int l, int m, int r) {
  int l1 = l;
  int r1 = m;
  int l2 = m;
  int r2 = r;
  int64_t inv = 0;
  while (l1 < r1 && l2 < r2) {
    if (a[l1] <= a[l2]) {
      result[l1 + l2 - m] = a[l1];
      l1++;
      inv += l2 - m;
    } else {
      result[l1 + l2 - m] = a[l2];
      l2++;
    }
  }
  while (l1 < r1) {
    result[l1 + l2 - m] = a[l1];
    l1++;
    inv += l2 - m;
  }
  while (l2 < r2) {
    result[l1 + l2 - m] = a[l2];
    l2++;
  }
  for (int i = l; i < r; i++) {
    a[i] = result[i];
  }
  return inv;
}

int64_t MergeSort(int *a, int *result, int l, int r) {
  if (r - l < 2) {
    return 0;
  }
  int m = (l + r) / 2;
  int64_t l_inv = MergeSort(a, result, l, m);
  int64_t r_inv = MergeSort(a, result, m, r);
  return l_inv + r_inv + Merge(a, result, l, m, r);
}

int main() {
  int n;
  std::cin >> n;
  auto *a = new int[n];
  auto *result = new int[n + 1];
  for (int i = 0; i < n; ++i) {
    std::cin >> a[i];
  }
  std::cout << MergeSort(a, result, 0, n);
  delete[] a;
  delete[] result;
  return 0;
}
