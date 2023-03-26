#include<stdio.h>
#include<stdlib.h>

int main() {
  int *ptr;
  ptr = (int*) calloc(5, sizeof(int));
  int i = 0;
  while(i<5){
    printf("%d\n",ptr[i]);
    i++;
  }
  return 0;
}