#include<stdio.h>

int main() {
  int n;
  printf("Enter how many element will be in this array : ");
  scanf("%d", &n);
  int arr[n];
  for(int i = 0; i<n ; i++){
    printf("Enter %d index value: ", i+1);
    scanf("%d", &arr[i]);
  }
  int new_value;
  printf("Enter new value : ");
  scanf("%d", &new_value);
  arr[n] = new_value;
  printf("New array : \t");
  for(int i = 0; i<n+1 ; i++){
    printf("%d\t",arr[i]);
  }
  return 0;
}