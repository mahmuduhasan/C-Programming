#include<stdio.h>

int print_fifty(int n){
  if(n <= 50){
    printf("%d  ", n);
    print_fifty(n + 1);
  }
}

int sum(int a){
  if(a == 1){
    return 1;
  }
  int add = sum(a-1) + a;
  return add;
}



int main() {
  //print_fifty(1);
  int n;
  printf("Enter Number : ");
  scanf("%d", &n);
  printf("Sum is : %d", sum(n));
  return 0;
}