#include <iostream>

const int64_t kMaxN = 1000;
void ReadTable(bool table[kMaxN][kMaxN], int64_t n, int64_t m) {
  char tmp;
  for (int64_t i = 0; i < n; ++i) {
    for (int64_t j = 0; j < m; ++j) {
      std::cin >> tmp;
      if (tmp == '1') {
        table[i][j] = true;
      } else {
        table[i][j] = false;
      }
    }
  }
}

int64_t CountHorizontalLines(bool table[kMaxN][kMaxN], int64_t n, int64_t m) {
  int64_t hor_cnt = 0;
  for (int64_t i = 0; i < n; ++i) {
    bool flag = true;
    for (int64_t j = 0; j < m; ++j) {
      if (!table[i][j]) {
        flag = false;
        break;
      }
    }
    if (flag) {
      ++hor_cnt;
    }
  }
  return hor_cnt;
}

int64_t CountVerticalLines(bool table[kMaxN][kMaxN], int64_t n, int64_t m) {
  int64_t ver_cnt = 0;
  for (int64_t i = 0; i < m; ++i) {
    bool flag = true;
    for (int64_t j = 0; j < n; ++j) {
      if (!table[j][i]) {
        flag = false;
        break;
      }
    }
    if (flag) {
      ++ver_cnt;
    }
  }
  return ver_cnt;
}

int main() {
  int64_t n, m;
  std::cin >> n >> m;
  bool table[kMaxN][kMaxN];
  ReadTable(table, n, m);
  int64_t ver_cnt = CountVerticalLines(table, n, m);
  int64_t hor_cnt = CountHorizontalLines(table, n, m);
  if (n == 1 || m == 1 || (ver_cnt + hor_cnt <= 1)) {
    std::cout << '?';
    return 0;
  }
  if (hor_cnt >= 1 && ver_cnt >= 1) {
    std::cout << "Square";
  } else {
    if (hor_cnt == 0 && ver_cnt > 1) {
      int64_t cnt = 0, start = 0, end = 0;
      bool p = true, q = true;
      for (int64_t i = 0; i < m; ++i) {
        bool flag = true;
        for (int64_t j = 0; j < n; ++j) {
          if (!table[j][i]) {
            flag = false;
            break;
          }
        }
        if (flag) {
          cnt++;
        }
        if (cnt == 2 && q) {
          end = i;
          q = false;
        }
        if (cnt == 1 && p) {
          start = i;
          p = false;
        }
      }
      if (end - start - 1 < n) {
        std::cout << "Vertical line";
      } else {
        std::cout << '?';
      }
    } else {
      int64_t cnt = 0, start = 0, end = 0;
      bool p = true, q = true;
      for (int64_t i = 0; i < n; ++i) {
        bool flag = true;
        for (int64_t j = 0; j < m; ++j) {
          if (!table[i][j]) {
            flag = false;
            break;
          }
        }
        if (flag) {
          cnt++;
        }
        if (cnt == 2 && q) {
          end = i;
          q = false;
        }
        if (cnt == 1 && p) {
          start = i;
          p = false;
        }
      }
      if (end - start - 1 < m) {
        std::cout << "Line";
      } else {
        std::cout << '?';
      }
    }
  }
}
