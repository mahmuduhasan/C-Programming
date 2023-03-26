#include<stdio.h>
#include<stdlib.h>

int main() {
  int *ptr = (int*) calloc(5,sizeof(int));
  for(int i = 0; i<=10 ; i++){
    if(i%2 == 1){
      ptr[i/2] = i;
    }
  }
  for(int i = 0; i<5 ; i++){
    printf("%d ", ptr[i]);
  }
  printf("\n");
  ptr = realloc(ptr, 6);

  for(int i = 1; i<=12 ; i++){
    if(i%2 == 0){
      ptr[i/2 - 1] = i;
    }
  }
  for(int i = 0; i<6 ; i++){
    printf("%d ", ptr[i]);
  }

  free(ptr);
  return 0;
}