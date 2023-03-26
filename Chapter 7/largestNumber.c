#include<stdio.h>

int main() {
  int largest = 0, arr[] = {1,2,4,5,70,98};
  for(int i = 0; i<6; i++){
    if(arr[i] > largest){
      largest = arr[i];
    }
  } 
  printf("Largest number of this array is : %d", largest);
  return 0;
}