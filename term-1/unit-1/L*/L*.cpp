#include <iostream>

int Partition(int* arr, int left, int right);

void Swap(int& a, int& b) {
  int c = a;
  a = b;
  b = c;
}

void QuickSort(int* arr, int left, int right) {
  if (left >= right) {
    return;
  }
  int pivot_point = Partition(arr, left, right);
  QuickSort(arr, left, pivot_point);
  QuickSort(arr, pivot_point + 1, right);
}
int Partition(int* arr, int left, int right) {
  int pivot_value = arr[(left + right) / 2];
  int i = left;
  int j = right;
  while (i <= j) {
    while (arr[i] < pivot_value) {
      ++i;
    }
    while (arr[j] > pivot_value) {
      --j;
    }
    if (i >= j) {
      break;
    }
    Swap(arr[i++], arr[j--]);
  }
  return j;
}

int BinSearch(int* arr, int left, int right, int key) {
  int mid = (left + right) / 2;
  if (left > right) {
    return -1;
  }
  if (arr[mid] == key) {
    return mid;
  }
  if (arr[mid] > key) {
    return BinSearch(arr, left, mid - 1, key);
  }
  if (arr[mid] < key) {
    return BinSearch(arr, mid + 1, right, key);
  }
  return 0;
}

int main() {
  int n, m;
  std::cin >> n;
  auto* arr1 = new int[n];

  for (int i = 0; i < n; i++) {
    std::cin >> arr1[i];
  }
  std::cin >> m;
  auto* arr2 = new int[m];
  for (int i = 0; i < m; i++) {
    std::cin >> arr2[i];
  }
  QuickSort(arr1, 0, n - 1);
  QuickSort(arr2, 0, m - 1);
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (BinSearch(arr2, 0, m - 1, arr1[i]) != -1) {
      count++;
    }
  }
  for (int i = 0; i < m; i++) {
    if (BinSearch(arr1, 0, n - 1, arr2[i]) != -1) {
      count++;
    }
  }
  if (count == n + m) {
    std::cout << "YES";
  } else {
    std::cout << "NO";
  }
  delete[] arr1;
  delete[] arr2;
  return 0;
}

