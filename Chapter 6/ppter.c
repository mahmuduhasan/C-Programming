#include<stdio.h>

int main() {
  int age = 22;
  int *ptr = &age;
  int **pptr = &ptr;

  printf("ptr : %d \n", ptr);
  printf("pptr : %d \n", pptr);

  //printf("%d", **pptr);
  return 0;
}