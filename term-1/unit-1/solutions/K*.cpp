#include <iostream>

int main() {
  unsigned int n;
  std::cin >> n;
  char arr[1000000];
  std::cin >> arr;
  unsigned int size = 0;
  while (arr[size] != '\0') {
    size++;
  }
  arr[size] = '\0';
  unsigned int counter = 0;
  for (unsigned int i = n; i < size; i++) {
    unsigned int j = i;
    unsigned int k = 0;
    while (true) {
      if (j != size && arr[j] == arr[j - n]) {
        counter++;
        k++;
        j++;
      } else {
        break;
      }
    }
    i += j - i;
    counter += (k) * (k - 1) / 2;
  }
  std::cout << counter << std::endl;
  return 0;
}
