#include <iostream>

char DivideAndRemainder(char *x) {
  char carry = 0;
  bool flag = false;
  int pos = 0;
  for (int i = 0; x[i] != 0; i++) {
    char c = x[i] - '0';
    x[pos] = (10 * carry + c) / 2 + +'0';

    if (x[pos] != '0') {
      flag = true;
    }
    if (flag) {
      pos++;
    }
    carry = c % 2;
  }
  x[pos] = 0;

  return carry + '0';
}

char *GetBinary(char *x) {
  auto result = new char[849];
  int len = 0;
  while (x[0] != 0) {
    result[len++] = DivideAndRemainder(x);
  }

  result[len] = 0;

  for (int i = len / 2 - 1; i >= 0; i--) {
    char c = result[len - i - 1];
    result[len - i - 1] = result[i];
    result[i] = c;
  }

  return result;
}

char *Solution(char *str, char *digit, int digit_len, char *result, int &result_len) {
  for (int i = 0; str[i] != 0; i++) {
    if (isdigit(str[i])) {
      digit[digit_len++] = str[i];
      digit[digit_len] = 0;
    } else {
      if (digit_len > 0) {
        char *binary = GetBinary(digit);
        int index = 0;
        while (binary[index]) {
          result[result_len++] = binary[index++];
        }
        delete[] binary;

        digit_len = 0;
      }
      result[result_len++] = str[i];
    }
  }

  if (digit_len > 0) {
    char *binary = GetBinary(digit);
    int index = 0;
    while (binary[index]) {
      result[result_len++] = binary[index++];
    }
    delete[] binary;
    digit_len = 0;
  }
  result[result_len] = 0;
  return result;
}

int main() {
  char str[256], digit[256], result[849];
  std::cin.getline(str, 256);
  int result_len = 0;
  int digit_len = 0;
  std::cout << Solution(str, digit, digit_len, result, result_len) << std::endl;
}
