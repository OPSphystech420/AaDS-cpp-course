#include <iostream>

void Del(char* n, uint64_t pos, uint64_t size) {
  for (uint64_t i = pos; i < size; i++) {
    n[i] = n[i + 1];
  }
}

bool IsPalindrome(const char* x, uint64_t i) {
  uint64_t counter = 0;
  uint64_t len = i;
  for (uint64_t j = 0; j < len; j++) {
    char x1 = x[j];
    char x2 = x[len - j - 1];
    if (x1 == x2) {
      counter++;
    }
  }
  return counter == len;
}

char* Replace(char repl[], uint64_t i, uint64_t j) {
  repl[i] = repl[j];
  return repl;
}

char* Remove(char rem[], uint64_t i, uint64_t pos) {
  Del(rem, pos, i);
  return rem;
}

int main() {
  const int64_t max_n = 100000;
  char n[max_n];
  std::cin.getline(n, max_n);
  uint64_t j = 0;
  while (n[j] != '\0') {
    j++;
  }
  char str[max_n];
  char rem1[max_n];
  char rem2[max_n];
  char rep[max_n];
  uint64_t i = 0;
  for (uint64_t k = 0; k < j; k++) {
    if (isalpha(n[k])) {
      str[i] = toupper(n[k]);
      rem1[i] = toupper(n[k]);
      rem2[i] = toupper(n[k]);
      rep[i] = toupper(n[k]);
      i++;
    }
  }
  str[i + 1] = '\0';
  rem1[i + 1] = '\0';
  rem2[i + 1] = '\0';
  rep[i + 1] = '\0';
  uint64_t a;
  uint64_t b;
  for (uint64_t j = 0; j < i; j++) {
    char x1 = str[j];
    char x2 = str[i - j - 1];
    if (x1 != x2) {
      a = j;
      b = i - j - 1;
      break;
    }
  }
  if (IsPalindrome(str, i)) {
    std::cout << "YES" << '\n' << str;
  } else if (IsPalindrome((Replace(rep, a, b)), i)) {
    std::cout << "YES" << '\n' << rep;
  } else if (IsPalindrome((Remove(rem1, i, a)), i - 1)) {
    std::cout << "YES" << '\n' << rem1;
  } else if (IsPalindrome((Remove(rem2, i, b)), i - 1)) {
    std::cout << "YES" << '\n' << rem2;
  } else {
    std::cout << "NO";
  }
  return 0;
}
