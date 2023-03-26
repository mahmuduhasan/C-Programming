#include<stdio.h>

void doSPA(int x, int y, int *s, int *p, float *a){
  *s = x + y;
  *p = x * y;
  *a = *s / 2.0;
}

int main() {
  int a = 10, b = 5;
  int sum, product;
  float average;
  doSPA(a,b,&sum,&product,&average);
  printf("Sum is : %d\n", sum);
  printf("Product is : %d\n", product);
  printf("Average is : %.2f\n", average);
  return 0;
}