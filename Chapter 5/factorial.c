#include<stdio.h>

int factorial(int n){
  if(n == 1){
    return 1;
  }
  int result = factorial(n-1) * n;
  return result;
}

int main() {
  printf("%d", factorial(5));
  return 0;
}