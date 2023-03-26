#include<stdio.h>

int main() {
  FILE *fptr;
  // fptr = fopen("test.txt", "w");
  // for(int i = 1; i<6 ; i++){
  //   fprintf(fptr, "%d ", i);
  // }
  fptr = fopen("test.txt", "r");
  int n;
  fscanf(fptr, "%d", &n);
  printf("%d ", n);
  fscanf(fptr, "%d", &n);
  printf("%d ", n);
  fscanf(fptr, "%d", &n);
  printf("%d ", n);
  fscanf(fptr, "%d", &n);
  printf("%d ", n);
  fscanf(fptr, "%d", &n);
  printf("%d ", n);

  fclose(fptr);
  return 0;
}