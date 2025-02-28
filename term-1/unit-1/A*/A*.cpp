#include <iostream>

int main() {
  int n, t;
  std::cin >> n >> t;
  int a[10][10];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      std::cin >> a[i][j];
    }
  }
  for (int k = 0; k < t; k++) {
    int b[10][10];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        b[i][j] = a[i][j];
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        int s = 0;
        if (i > 0) {
          if (j > 0) {
            s += a[i - 1][j - 1];
          }
          s += a[i - 1][j];
          if (j < n - 1) {
            s += a[i - 1][j + 1];
          }
        }
        if (j > 0) {
          s += a[i][j - 1];
        }
        if (j < n - 1) {
          s += a[i][j + 1];
        }
        if (i < n - 1) {
          if (j > 0) {
            s += a[i + 1][j - 1];
          }
          s += a[i + 1][j];
          if (j < n - 1) {
            s += a[i + 1][j + 1];
          }
        }
        if (a[i][j] == 1) {
          if (s < 2 || s > 3) {
            b[i][j] = 0;
          }
        } else {
          if (s == 3) {
            b[i][j] = 1;
          }
        }
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        a[i][j] = b[i][j];
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      std::cout << a[i][j] << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}
