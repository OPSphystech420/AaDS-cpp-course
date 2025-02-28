#include <iostream>

int64_t n, m, a[2 * 15], s;
int64_t cur[2 * 15], res[2 * 15];  // две монеты достоинтвом M<=15
int64_t cur_size, res_size;  // глобально обьявлять удобней, иначе надо изменить 9 строку
void Coins(int64_t pos = 0, int64_t sum = 0) {
  if (pos == m) {
    if (sum == n) {
      if (!res_size || cur_size < res_size) {
        res_size = cur_size;
        for (int64_t i = 0; i < res_size; i++) {
          res[i] = cur[i];
        }
      }
      return;
    }
    return;
  }
  Coins(pos + 1, sum);
  cur[cur_size++] = a[pos];
  Coins(pos + 1, sum + a[pos]);
  cur[cur_size++] = a[pos];
  Coins(pos + 1, sum + a[pos] * 2);
  cur_size--;
  cur_size--;
}

int main() {
  std::cin >> n >> m;
  std::cout << std::endl;
  for (int64_t i = 0; i < m; i++) {
    std::cin >> a[i];
    s += a[i] * 2;
  }
  if (s < n) {
    std::cout << -1 << "\n";
    return 0;
  }
  Coins();
  if (!res_size) {
    std::cout << 0 << "\n";
    return 0;
  }
  std::cout << res_size << "\n";
  for (int64_t i = 0; i < res_size; i++) {
    std::cout << res[i] << " ";
  }
  return 0;
}

