#include <stddef.h>
#include <stdio.h>

int cmp(void *elem, void *arg) {
  int tocheck = *((int *)elem);
  int key = *((int *)arg);

  return tocheck == key ? 1 : 0;
}

int generic_count(void *key, void *arr, size_t elemsz, size_t n, int *cmp()) {
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    void *current = arr + i * elemsz;
    if (*cmp(current, key) == 1) {
      cnt++;
    }
  }
}
