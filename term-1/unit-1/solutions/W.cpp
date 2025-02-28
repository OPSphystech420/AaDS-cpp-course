#include <iostream>

void QuickSort(int *arr, int left, int right) {
  if (left >= right) {
    return;
  }
  int pivot = arr[right];
  int i = left;
  int j = right - 1;
  while (i <= j) {
    if (arr[i] < pivot) {
      ++i;
    } else if (arr[j] >= pivot) {
      --j;
    } else {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      ++i;
      --j;
    }
  }
  int temp = arr[i];
  arr[i] = arr[right];
  arr[right] = temp;
  QuickSort(arr, left, i - 1);
  QuickSort(arr, i + 1, right);
}

int BinarySearch(int *points, int group, int distrib, int enrollee, int left, int right) {
  if (right - left <= 1) {
    return right;
  }
  int mid = (right + left) / 2;
  int counter = enrollee - distrib * group;
  int spread = 0;
  while (spread < enrollee - distrib + 1) {
    if (points[spread + distrib - 1] - points[spread] <= mid) {
      spread += distrib;
    } else if (counter != 0) {
      ++spread;
      --counter;
    } else {
      return BinarySearch(points, group, distrib, enrollee, mid, right);
    }
  }
  return BinarySearch(points, group, distrib, enrollee, left, mid);
}

int main() {
  int enrollee = 0;
  int group = 0;
  int distrib = 0;
  std::cin >> enrollee >> group >> distrib;
  auto points = new int[enrollee];
  for (int i = 0; i < enrollee; ++i) {
    std::cin >> points[i];
  }
  QuickSort(points, 0, enrollee - 1);
  int left = 0;
  int right = points[enrollee - 1] - points[0];
  std::cout << BinarySearch(points, group, distrib, enrollee, left, right);
  delete[] points;
  return 0;
}
