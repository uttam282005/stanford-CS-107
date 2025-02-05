#include <stdio.h>
#include <stdlib.h>

void change(int n) { n += 10; }

int main(int argc, char *argv[]) {
  int a = 10;
  printf("Before %d: ", a);
  change(a);

  // Doesn't actually returns the updated value
  printf("After %d: ", a);
}
