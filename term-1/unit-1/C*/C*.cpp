#include <iostream>

int n;
int n_board[10][10];
void QPut(int x, int y, int k) {
  for (k = 0; k < n; k++) {
    if (0 <= x + y - k) {
      if (x + y - k < n) {
        n_board[x + y - k][k] += 1;
      }
    }
    if (0 <= x - y + k) {
      if (x - y + k < n) {
        n_board[x - y + k][k] += 1;
      }
    }
    n_board[k][y] += 1;
    n_board[x][k] += 1;
  }
  n_board[x][y] = 1;
}

void QRemove(int x, int y, int k) {
  for (k = 0; k < n; k++) {
    if (0 <= x + y - k) {
      if (x + y - k < n) {
        if (n_board[x + y - k][k] > 0) {
          n_board[x + y - k][k] -= 1;
        }
      }
    }
    if (0 <= x - y + k) {
      if (x - y + k < n) {
        if (n_board[x - y + k][k] > 0) {
          n_board[x - y + k][k] -= 1;
        }
      }
    }
    n_board[k][y] -= 1;
    n_board[x][k] -= 1;
  }
  n_board[x][y] = 0;
}

int Solve(int x, int y) {
  int ret = 0;
  if (x == n) {
    return true;
  }
  for (y = 0; y < n; y++) {
    if (n_board[x][y] == 0) {
      QPut(x, y, 0);
      ret += Solve(x + 1, y);
      QRemove(x, y, 0);
    }
  }
  return ret;
}

int main() {
  std::cin >> n;
  std::cout << Solve(0, 0);
  return 0;
}
