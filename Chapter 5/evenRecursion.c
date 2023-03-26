#include<stdio.h>

int even_add(int n){
  if(n == 2){
    return n;
  }
  if(n%2 == 1){
    n = n-1;
  }
  int next_digit;
  next_digit = even_add(n-2);
  int sum_till_last_even = next_digit + n;
  return sum_till_last_even;
}

int main(){
  printf("Sum of all even : %d", even_add(9));
  return 0;
}