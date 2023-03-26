#include<stdio.h>

int main() {
  /*int age = 56;
  int *ptr = &age;
  printf("%u\n", ptr);
  printf("Age is %d\n", *ptr);
  ptr++;
  printf("%u\n",ptr);
  printf("Age is %d\n", *ptr);
  ptr = ptr -2;
  printf("%u\n",ptr);
  printf("Age is %d\n", *ptr);*/


//Difference should be done with same data type.
  int age = 22;
  int _age = 45;

  int *ptr = &age;
  int *_ptr =&_age;

  printf("Difference : %u\n", ptr - _ptr);
  _ptr = &age;
  printf("Comparison = %u\n", ptr == _ptr);
  return 0;
}