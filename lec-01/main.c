#include <stdio.h>

static int sum_int(int count) {
  int arr[5];
  int sum = 0;
  for (int i = 0; i < count; i++)
    arr[i] = i + 1;
  for (int i = 0; i < count; i++)
    sum += arr[i];
  return sum;
}

int main(int argc, char *argv[]) {
  while (1) {
    int n;
    scanf("%d\n", &n);
    printf("%d\n", sum_int(n));
  }
}
