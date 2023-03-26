#include<stdio.h>
#include<stdlib.h>

int main() {
  int *ptr;
  ptr = (int*) malloc(5 * sizeof(int));
  ptr[0] = 5;
  ptr[1] = 10;
  ptr[2] = 15;
  ptr[3] = 20;
  ptr[4] = 25;
  int i = 0;
  while(i<5){
    printf("%d\n",ptr[i]);
    i++;
  }
  return 0;
}