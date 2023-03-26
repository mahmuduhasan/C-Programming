#include<stdio.h>

int main() {

// a.  Search on what a "nested loop" is & print this
// pattern using it.


// *****
// *****
// *****
// *****
  // for(int i = 0; i<4 ; i++){
  //   for(int j = 0; j<5; j++){
  //     printf("*");
  //   }
  //   printf("\n");
  // }
  
//b. Write a program to check if a number is prime or not.

// int n;
// printf("Enter number : ");
// scanf("%d", &n);
// int flag = 0;  // 0 for prime, 1 for not prime
// if(n == 0 || n == 1){ // 0,1 is not prime numbers.
//   flag = 1;
// }

// for(int i = 2; i <= n/2 ; i++){
//   if(n%i == 0){
//     flag = 1;
//   }
// }

// if(flag == 0){
//   printf("%d is a prime number!", n);
// }else{
//   printf("%d is not a prime number", n);
// }

//c. Write a program to print prime numbers in a range.
int a, b, flag; // 0 for not prime, 1 for prime
printf("Enter first number : ");
scanf("%d", &a);
printf("Enter second number : ");
scanf("%d", &b);
if((a == 0 || a== 1) && (b == 0 || b == 1)){
  printf("Not Prime!");
  return 0;
}

for(int i = a ; i<=b ; i++){
  //printf("%d \n", i);
  flag = 1;
  for(int j = 2 ; j<= i/2 ; j++){
    //printf("%d \n", j);
    if(i%j == 0 ){
      flag = 0;
      break;
    }
  }
  if(flag == 1){
    printf("%d \n", i);
  }
}
  return 0;
}