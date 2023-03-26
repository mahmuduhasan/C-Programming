#include<stdio.h>

int main() {
  int table[2][10];
  for(int i = 0; i<2 ; i++){
    for(int j = 0; j<10 ; j++){
      if(i == 0){
        table[i][j] = 2 * (j+1);
      }
      if(i == 1){
        table[i][j] = 3 * (j+1);
      }
    }
  }
  for(int i = 0; i<2 ; i++){
    for(int j = 0; j<10 ; j++){
      printf("%d\t", table[i][j]);
    }
    printf("\n");
  }
  return 0;
}