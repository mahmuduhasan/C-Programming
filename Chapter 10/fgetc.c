#include<stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("test.txt", "r");
  char ch = fgetc(fptr);
  char ch1 = fgetc(fptr);
  char ch2 = fgetc(fptr);
  char ch3 = fgetc(fptr);
  char ch4 = fgetc(fptr);
  printf("%c", ch);
  printf("%c", ch1);
  printf("%c", ch2);
  printf("%c", ch3);
  printf("%c", ch4);
  return 0;
}