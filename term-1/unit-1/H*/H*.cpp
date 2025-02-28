#include <iostream>

int main() {
  char str[100000];
  std::cin.getline(str, 100000);
  uint64_t n = 0;
  uint64_t i;
  while (str[n] != '#') {
    n++;
  }
  for (i = 0; i < n; ++i) {
    if (i % 2 == 0) {
      std::cout << str[i];
    }
  }
  for (i = n - 1; i > 0; --i) {
    if (i % 2 != 0) {
      std::cout << str[i];
    }
  }
  return 0;
}
