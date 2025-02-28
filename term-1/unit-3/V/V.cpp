#include <iostream>

void QuickSort(int *arr, int left, int right) {
  if (left >= right) {
    return;
  }
  int pivot = arr[(left + right) / 2];
  int i = left;
  int j = right;
  while (i <= j) {
    while (arr[i] < pivot) {
      ++i;
    }
    while (arr[j] > pivot) {
      --j;
    }
    if (i <= j) {
      std::swap(arr[i], arr[j]);
      ++i;
      --j;
    }
  }
  QuickSort(arr, left, j);
  QuickSort(arr, i, right);
}

void Solution(const int *arr, int arr_sz, int64_t &size, int64_t &sum) {
  int64_t maxim;
  int bestsz;
  if (arr_sz == 1) {
    sum = arr[0];
    size = 1;
    return;
  }
  int pr_el;
  int cur_sz;
  int64_t cur_sm = 0;
  int minim_elem;
  int r1 = arr_sz - 3;
  int s1 = arr[arr_sz - 1];
  int l1 = -1;
  while (r1 - l1 > 1) {
    int mid = (l1 + r1) / 2;
    if (arr[mid] + arr[mid + 1] < s1) {
      l1 = mid;
    } else {
      r1 = mid;
    }
  }
  if (arr[r1] + arr[r1 + 1] >= s1) {
    minim_elem = r1;
  } else {
    minim_elem = r1 + 1;
  }
  bestsz = cur_sz = arr_sz - minim_elem;
  for (int i = minim_elem; i < arr_sz; ++i) {
    cur_sm += arr[i];
  }
  maxim = cur_sm;
  pr_el = minim_elem;
  for (int i = arr_sz - 2; i >= 2; --i) {
    if (arr[i - 2] + arr[i - 1] >= arr[i]) {
      int r2 = i - 2;
      int l2 = -1;
      int s2 = arr[i];
      while (r2 - l2 > 1) {
        int mid = (l2 + r2) / 2;
        if (arr[mid] + arr[mid + 1] < s2) {
          l2 = mid;
        } else {
          r2 = mid;
        }
      }
      if (arr[r2] + arr[r2 + 1] >= s2) {
        minim_elem = r2;
      } else {
        minim_elem = r2 + 1;
      }
      cur_sm -= arr[i + 1];
      for (int j = minim_elem; j < pr_el; ++j) {
        cur_sm += arr[j];
      }
      cur_sz += pr_el - minim_elem - 1;
      pr_el = minim_elem;
      if (cur_sm > maxim) {
        maxim = cur_sm;
        bestsz = cur_sz;
      }
    }
  }
  size = bestsz;
  sum = maxim;
}

int main() {
  int n;
  int64_t size = 0, sum = 0;
  std::cin >> n;
  auto arr = new int[n];
  for (int i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }
  QuickSort(arr, 0, n - 1);
  Solution(arr, n, size, sum);
  std::cout << size << ' ' << sum;
  delete[] arr;
}
