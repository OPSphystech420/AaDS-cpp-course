#include <climits>
#include <iostream>
struct Element {
  int value;
  int index;
};

bool operator<(Element element_1, Element element_2) {
  return element_1.value < element_2.value;
}

void SiftDown(Element *heap, int i, int heap_size) {
  int max = i;
  int left = 2 * i + 1;
  if (left < heap_size && heap[left] < heap[max]) {
    max = left;
  }
  int right = 2 * i + 2;
  if (right < heap_size && heap[right] < heap[max]) {
    max = right;
  }
  if (i != max) {
    std::swap(heap[i], heap[max]);
    SiftDown(heap, max, heap_size);
  }
}

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int x, i, j, gen = 0;
  std::cin >> x;
  auto ptr = new int *[x];
  auto len = new int[x];
  for (i = 0; i < x; ++i) {
    int n;
    std::cin >> n;
    len[i] = n;
    ptr[i] = new int[n];
    gen += n;
    for (j = 0; j < n; ++j) {
      std::cin >> ptr[i][j];
    }
  }
  auto ans = new int[gen];
  auto heap = new Element[x];
  for (int z = 0; z < x; ++z) {
    heap[z].index = z;
    heap[z].value = ptr[z][0];
  }
  for (int z = x / 2 - 1; z >= 0; --z) {
    SiftDown(heap, z, x);
  }
  auto *ptrs = new int[x];
  for (int z = 0; z < x; ++z) {
    ptrs[z] = 1;
  }
  for (int z = 0; z < gen; ++z) {
    ans[z] = heap[0].value;
    if (ptrs[heap[0].index] < len[heap[0].index]) {
      heap[0].value = ptr[heap[0].index][ptrs[heap[0].index]];
      ++ptrs[heap[0].index];
    } else {
      heap[0].value = INT_MAX;
    }
    SiftDown(heap, 0, x);
  }
  for (i = 0; i < gen; ++i) {
    std::cout << ans[i] << ' ';
  }
  for (i = 0; i < x; ++i) {
    delete[] ptr[i];
  }
  delete[] heap;
  delete[] ptrs;
  delete[] ans;
  delete[] ptr;
  delete[] len;
}

