#include<stdio.h>

int main() {
  FILE *fptr;
  FILE *fptr1;
  fptr = fopen("readFull.c", "r");
  fptr1 = fopen("copied.c", "w");
  char ch = fgetc(fptr);
  while (ch != EOF)
  {
    fprintf(fptr1, "%c", ch);
    ch = fgetc(fptr);
  }
  fclose(fptr);
  fclose(fptr1);
  return 0;
}