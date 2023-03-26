#include<stdio.h>

typedef struct ComplexNumber{
  int real;
  int imaginary;
} ComNum;

int  main() {
  ComNum cn1 = {3,5};
  ComNum *cn;
  cn = &cn1;
  printf("Real part is : %d\n", cn->real);
  printf("Imaginary part is : %d\n", cn->imaginary);
  return 0;
}