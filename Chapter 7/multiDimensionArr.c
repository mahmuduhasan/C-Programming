#include<stdio.h>

int main() {
  // 2 X 3
  int marks[2][3];
  marks[0][0] = 90;
  marks[0][1] = 98;
  marks[0][2] = 56;
  marks[1][0] = 76;
  marks[1][1] = 86;
  marks[1][2] = 100;
  printf("%d", marks[1][0]);
  return 0;
}