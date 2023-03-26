#include<stdio.h>


int main() {
  int arr[10] = {11,2,11,4,5,6,5,3,5,5};
  int findingValue = 11;
  int count = 0;
  for(int i = 0; i<10; i++){
    if(arr[i] == findingValue){
      count++;
    }
  }
  printf("%d existed %d times.", findingValue, count);
  return 0;
}