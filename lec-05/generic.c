#include "memcpy.c"
#include <stddef.h>
#include <string.h>

// Generic find max function
void *find_max(void *arr, size_t elemsz, size_t n,
               int (*comp)(const void *, const void *)) {
  void *maxele = arr;
  for (int i = 0; i < n; i++) {
    void *ith = (char *)arr + i * elemsz;
    if (comp(ith, maxele) > 0) {
      maxele = ith;
    }
  }

  return maxele;
}

// Generic swap function
void gswap(void *pa, void *pb, size_t elemsz) {
  char temp[elemsz];
  memcopy(temp, pa, elemsz);
  memcopy(pa, pb, elemsz);
  memcopy(pb, temp, elemsz);
}
