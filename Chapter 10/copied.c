#include<stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("D:\\Loser\\01.14.23_C_Programming\\interviewTypeThing.c", "r");
  char ch = fgetc(fptr);
  while(ch != EOF){
    printf("%c", ch);
    ch = fgetc(fptr);
  }
  printf("\n");
  return 0;
}