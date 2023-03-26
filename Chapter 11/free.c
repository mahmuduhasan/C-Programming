#include<stdio.h>
#include<stdlib.h>

int main() {
  int *iptr = (int*) malloc(5 * sizeof(int));
  iptr[0] = 2;
  iptr[1] = 3;
  iptr[2] = 4;
  iptr[3] = 5;
  iptr[4] = 6;
  float *flptr = (float*) calloc(5, sizeof(float));
  flptr[0] = 2;
  flptr[1] = 3;
  flptr[2] = 4;
  flptr[3] = 5;
  flptr[4] = 6;
  int i = 0;
  while(i<5){
    printf("Malloc %d : %d\n", i+1, iptr[i]);
    printf("Calloc %d : %.1f\n", i+1, flptr[i]);
    i++;
  }
  free(iptr);
  free(flptr);
  int j = 0;
  while(j<5){
    printf("Malloc %d : %d\n", i+1, iptr[i]);
    printf("Calloc %d : %.1f\n", i+1, flptr[i]);
    j++;
  }
  return 0;
}