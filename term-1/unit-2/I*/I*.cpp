#include <iostream>

int main() {
  int64_t w, h, n;
  std::cin >> w >> h >> n;
  int64_t mid;
  int64_t low_x = 0;
  int64_t up_x = n * std::max(w, h) + 1;
  while (low_x + 1 < up_x) {
    mid = (low_x + up_x) / 2;
    if (mid / h * (mid / w) < n) {
      low_x = mid;
    } else {
      up_x = mid;
    }
  }
  if (up_x / h * (up_x / w) >= n) {
    std::cout << up_x;
  } else {
    std::cout << low_x;
  }
}
