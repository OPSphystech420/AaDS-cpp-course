#include <iostream>

int n, m;
int speed[10], length[10], bound[100000], fine[100000];
int CalcTime(double diff) {
  double t = 0;
  for (int i = 0; i < n; ++i) {
    t += static_cast<double>(length[i]) / static_cast<double>(speed[i] + diff);
  }
  return t;
}

int main() {
  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    std::cin >> speed[i];
  }
  for (int i = 0; i < n; ++i) {
    std::cin >> length[i];
  }
  std::cin >> m;
  for (int i = 0; i < m - 1; ++i) {
    std::cin >> bound[i];
  }
  for (int i = 0; i < m; ++i) {
    std::cin >> fine[i];
  }
  int q;
  std::cin >> q;
  while (q--) {
    int s, t;
    std::cin >> s >> t;
    double min_t = CalcTime(0.0);

    if (min_t <= t - s - 1) {
      std::cout << "0" << std::endl;
      continue;
    }

    int left = -1, right = m - 1;
    while (right - left > 1) {
      int mid = (left + right) / 2;
      int cur_diff = bound[mid];

      if (CalcTime(cur_diff) <= t - s - 1) {
        right = mid;
      } else {
        left = mid;
      }
    }
    std::cout << fine[right] << std::endl;
  }
  return 0;
}

