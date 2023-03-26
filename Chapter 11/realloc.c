#include<stdio.h>
#include<stdlib.h>

int main() {
  int *ptr = (int*) malloc(5 * sizeof(int));
  ptr[0] = 2;
  ptr[3] = 3;
  ptr[2] = 5;
  ptr[1] = 7;
  ptr[4] = 19;
  printf("Before realloc : \n");
  int j = 0;
  while(j<5){
    printf("Number %d : %d\n", j+1, ptr[j]);
    j++;
  }
  ptr = realloc(ptr, 10);
  ptr[0] = 2;
  ptr[1] = 7;
  ptr[2] = 5;
  ptr[3] = 3;
  ptr[4] = 19;
  ptr[5] = 34;
  ptr[6] = 45;
  ptr[7] = 43;
  ptr[8] = 35;
  ptr[9] = 87;
  printf("After realloc : \n");
  int i = 0;
  while(i<10){
    printf("Number %d : %d\n", i+1, ptr[i]);
    i++;
  }
  return 0;
}