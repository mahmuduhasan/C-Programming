#include<stdio.h>

int main() {
  int array[] = {11,25,32,4,5,11,27,31,4,9};
  int counter = 0;
  for(int i = 0; i<10; i++){
    for(int j = i+1; j<10 ; j++){
      if(array[i] == array[j]){
        counter++;
        break;
      }else{
        continue;
      }
    }
  }
  printf("%d", counter);
  return 0;
}