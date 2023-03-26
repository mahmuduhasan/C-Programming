#include<stdio.h>

void reverse(int arr[], int n){
  for(int i = 0; i<n ; i++){
    printf("Enter Number %d: ", i+1);
    scanf("%d", &arr[i]);
  }
  for(int j = 0; j<n; j++){
    printf("%d ", arr[j]);
  }
  printf("\n");
  for(int i = 0; i<(n/2) ; i++){
    int temp = arr[i];
    arr[i] = arr[n-(i+1)];
    arr[n-(i+1)] = temp;
  }
  for(int j = 0; j<n; j++){
    printf("%d ", arr[j]);
  }
}

int main() {
  int n;
  printf("Enter size : ");
  scanf("%d", &n);
  int arr[n];
  reverse(arr, n);
  return 0;
}