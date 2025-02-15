#include "generic.c"
#include <stdio.h>

int cmp(const void *pa, const void *pb) {
  int num1 = *(int *)pa;
  int num2 = *(int *)pb;

  return ((num1 > num2) ? 1 : 0);
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int a = 3;
  int b = 4;

  printf("a before: %d\n", a);
  printf("b before: %d\n", b);

  gswap(&a, &b, sizeof(a));

  printf("a after: %d\n", a);
  printf("b after: %d\n", b);

  int max = *(int *)find_max(arr, sizeof(arr[0]), 5, cmp);
  printf("Max %d\n", max);
}
