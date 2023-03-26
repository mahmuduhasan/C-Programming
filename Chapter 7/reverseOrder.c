#include<stdio.h>

int main(){
  int arr1[10];
  int arr2[10];
  for(int i = 0; i<10 ; i++){
    printf("Enter Number %d: ", i+1);
    scanf("%d", &arr1[i]);
  }
  for(int i = 0; i<10; i++){
    arr2[i] = arr1[i];
  }
  printf("Array 1: ");
  for(int i = 0; i<10; i++){
    printf("%d ", arr1[i]);
  }
  printf("\n");
  printf("Array 2: ");
  for(int i = 0; i<10; i++){
    printf("%d ", arr2[i]);
  }
  // int sum = 0;
  // printf("Numbers: \n");
  // for(int i = 9; i>=0 ; i--){
  //   printf("%d ",arr[i]);
  //   sum += arr[i];
  // }
  // printf("\nSum is : %d",sum);
  return 0;
}