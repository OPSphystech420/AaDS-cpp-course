#include <iostream>

int main() {
  int n, m, k;
  std::cin >> n >> m >> k;
  if (m > n) {
    int tmp = n;
    n = m;
    m = tmp;
  }
  --m;
  --n;
  int64_t sum = m + n;
  for (int i = 0; i < k; ++i) {
    int64_t counter = 0;
    int64_t prev_m = (m - i) / k;
    int64_t next_n = (sum - i) / k;
    if (i <= m) {
      counter += (2 * (i + 1) + k * prev_m) * (prev_m + 1) / 2;
      counter += (m + 1) * ((n - i) / k - prev_m);
      counter += (2 * sum - (k * ((n - i + k) / k) + i) + 1 - (k * next_n + i) + 1) * (next_n - (n - i) / k) / 2;
    } else {
      if (i <= n) {
        counter += (m + 1) * ((n - i) / k + 1);
        counter += (2 * sum - (k * ((n - i + k) / k) + i) + 1 - (k * next_n + i) + 1) * (next_n - (n - i) / k) / 2;
      } else if (i <= sum) {
        counter += sum - i + 1;
      }
    }
    std::cout << counter << ' ';
  }
}
