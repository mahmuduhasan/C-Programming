#include<stdio.h>
#include<math.h>
// void f_of_x(int count,int x);
int sum(int n){
  if(n == 1){
    return 1;
  }
  int sum_of_n_minus_1 = sum(n-1);
  int sum_till_n = sum_of_n_minus_1 + n;
  return sum_till_n;
}
int main(){
  // f_of_x(3,2);
  printf("Sum of this recursion is : %d", sum(5));
  return 0;
}

// void f_of_x(int count,int x){
//   if(count == 0){
//     return;
//   }
//   int square = pow(x,2);
//   printf("f(x) = %d \n", square);
//   f_of_x(count - 1, square);
// }