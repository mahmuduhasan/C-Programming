#include<stdio.h>

void factorial(int a, int *factN){
    if(a == 1){
      *factN = 1;
    }else{
      int factos = 1;
      for(int i = a; i>0 ; i--){
        factos *= i;
      }
      *factN = factos;
    }
    
}

int main() {
  int n, factN;
  printf("Enter Number : ");
  scanf("%d", &n);
  factorial(n, &factN);
  printf("Factorial of %d is %d.", n, factN);
  return 0;
}