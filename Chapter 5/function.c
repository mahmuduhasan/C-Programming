#include<stdio.h>

int sum(int num1, int num2);

int main(){
  int a, b;
  printf("Enter first number : ");
  scanf("%d", &a);
  printf("Enter second number : ");
  scanf("%d", &b);
  printf("%d", sum(a,b));
  return 0;
}
int sum(int num1, int num2){
  int result = num1 + num2;
  return result;
}