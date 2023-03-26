#include<stdio.h>

void odd_count(int arr[], int n, int *x){
  for(int i = 0; i<n; i++){
    printf("Enter %d number : ",i+1);
    scanf("%d", &arr[i]);
    if(arr[i]%2 == 1){
      *x = *x + 1;
    }
  }
}

int main() {
  int n, counter = 0;;
  printf("Enter Number of Element of Array : ");
  scanf("%d",&n);
  int arr[n];
  odd_count(arr,n, &counter);
  printf("%d", counter);
  return 0;
}