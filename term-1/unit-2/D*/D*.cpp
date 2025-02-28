#include <iostream>

void Del(int n);
void PutNew(int n) {
  if (n == 1) {
    std::cout << 1 << ' ';
    return;
  }
  if (n == 2) {
    std::cout << 1 << ' ' << 2 << ' ';
    return;
  }
  if (n > 2) {
    PutNew(n - 1);
    Del(n - 2);
    std::cout << n << ' ';
    PutNew(n - 2);
    return;
  }
}

void Del(int n) {
  if (n == 1) {
    std::cout << -1 << ' ';
    return;
  }
  if (n == 2) {
    std::cout << -2 << ' ' << -1 << ' ';
    return;
  }
  if (n > 2) {
    Del(n - 2);
    std::cout << -n << ' ';
    PutNew(n - 2);
    Del(n - 1);
    return;
  }
}

int main() {
  int n;
  std::cin >> n;
  if (n == 1) {
    std::cout << 1 << std::endl;
  } else if (n == 2) {
    std::cout << 1 << ' ' << 2 << std::endl;
  } else {
    PutNew(n);
  }
  return 0;
}
