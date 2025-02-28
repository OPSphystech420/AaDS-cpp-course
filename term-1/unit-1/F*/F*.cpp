#include <iostream>

void Hanoi(int n, int a, int b, int c) {
  if (n != 1) {
    Hanoi(n - 1, a, c, b);
    std::cout << n << " " << a << " " << c << '\n';
    Hanoi(n - 1, b, a, c);
  } else {
    std::cout << n << " " << a << " " << c << '\n';
  }
}

int main() {
  int n;
  std::cin >> n;
  Hanoi(n, 1, 2, 3);
  return 0;
}
