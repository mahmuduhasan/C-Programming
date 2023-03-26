#include<stdio.h>

int fibonacci ( int n ){
  if(n==1){
    return 1;
  }
  if(n == 0){
    return 0;
  }
  int fib1 = fibonacci(n-1);
  int fib2 = fibonacci(n-2);
  int sum =  fib1 + fib2;
  return sum;
}

int main() {
  printf("%d", fibonacci(5));
  return 0;
}