#include<stdio.h>

void sum (int n) {
  n = n+n;
  printf("Sum is : %d\n", n);
}

void _sum( int *n){
  *n = (*n) + (*n);
  printf("Sum is : %d\n", *n);
}

int main() {
  //call by value
  int n = 4;
  sum(4);
  printf("Number is : %d\n", n);
  //call by reference
  _sum(&n);
  printf("Number is : %d\n", n);
  return 0;
}