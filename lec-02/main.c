#include <stdio.h>
#include <stdlib.h>

// NOTE: pointer size is always 8bytes irrespective of their type
int main(int argc, char *argv[]) {
  int i = 42;
  int j = 107;
  int *p = &i;
  int *q = &j;

  // NOTE: p and q are aliases because now they point to the same address
  p = q;

  // NOTE: i and j becomes equla after this i.e i = j = 107
  *p = *q;

  // NOTE: This will give error because we are taking a address (8 bytes) and
  // trying to assign it to a int i (4 bytes)
  // *p = q; *p = q;

  // NOTE: Again error but worse becuase now we have a pointer containg a bogus
  // address which can be dangerous
  // p = *q;
  // printf("%d\n", *p); //seg fault
  //
  // NOTE: While assigning keep the type same on both sides

  // Uninitialized pointer can point to valid or invalid memory address
  // int *p;
  // printf("%d\n", *p) // probably seg fault

  // NOTE: Warning on this one
  int *a = NULL;
  int b = 5;
  double d = 2.5;
  int *ip = &b;
  double *dp = &d;
  // dp = ip;

  int *f = malloc(sizeof(int));
  *f = 23;

  // Prints 23
  printf("%d\n", *f);
  free(f);

  // Garbage value
  printf("%d\n", *f);

  // NOTE: This array is in heap memory not stack
  //  int *p = malloc(4*sizeof(int));
  //  p[i]  = *(p + i);
  //  &p[i] = p + i;

  // Not freeing the allocated heap memory is as good as wasting it
  // NOTE: Call free only one time for a memory address
}
