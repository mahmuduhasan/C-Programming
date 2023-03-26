#include<stdio.h>

int main() {
  //We can loop iterator as int, float and character types.
  //For
  // printf("I am printing for For Loop! \n");
  // for(int i = 0 ; i< 5; i=i+1){
  //   printf("Hello World! \n");
  // }
  //While
  // printf("I am printing for While Loop! \n");
  // int j = 0;
  // while(j<5){
  //   printf("Hello World! \n");
  //   j = j+1;
  // }
  //Do-while
  // printf("I am printing for Do-While Loop! \n");
  // int k = 0;
  // do
  // {
  //   printf("Hello World! \n");
  //   k = k+1;
  // } while (k<0);

  //Infinite Loop (Do Not USE)
  // for(int i = 1; ; i++){
  //   printf("Hello World! \n");
  // }


  //increment operator
  //i++ ++i
  //i++ use i than increase (Post increment)
  //++i (Pre increment)
  //Same goes for decrement operator
  //int n = 1;
  //printf("%d \n", n++); // Use than increase so output is 1
  //printf("%d \n", n); // Increased into last line so now the out put is 2
  
  //int m = 1;
  //printf("%d \n", ++m); // Increase than use
  // int n;
  // printf("Enter number : ");
  // scanf("%d", &n);
  // int sum = 0;
  // for(int i = 1, j = n; i <= n && j >= 1 ; i++, j--){
  //   sum += i;
  //   printf("%d \n", j);
  // }

  // printf("Sum is : %d", sum);

  //Break
  // for(int i=0; i<5; i++){
  //   if(i==3){
  //     break;
  //   }
  //   printf("%d \n", i);
  // }

  // printf("End");

  //Keep taking numbers as input from user until user enters an odd number
  // for(int i=1; i<=10; i++){
  //   int input;
  //   printf("Enter Input as even number : ");
  //   scanf("%d", &input);
  //   if(input % 2 == 1){
  //     printf("Wrong ODD input!");
  //     break;
  //   }
  //   printf("%d input = %d\n", i, input);
  // }
  // int n;
  // do{
  //   printf("Enter Input : ");
  //   scanf("%d", &n);
  //   printf("%d\n",n);
  //   if(n % 7 == 0){
  //     break;
  //   }
  // } while(1);
  //Continue
  // for(int i=0; i<5; i++){
  //   if(i==3){
  //     continue;
  //   }
  //   printf("%d \n", i);
  // }

  // int n;
  // printf("Enter Number : ");
  // scanf("%d", &n);
  // int fact = 1;
  // for(int i = n; i>=1 ; i--){
  //   fact *= i;
  // }

  // printf("%d", fact);

  // int n;
  // printf("Enter Number : ");
  // scanf("%d", &n);
  // for(int i = 10; i>=1 ; i--){
  //   printf("%d x %d = %d \n", i,n, i*n);
  // }
  // int sum = 0;
  // for(int i = 5; i <= 50 ; i++){
  //   sum += i;
  // }
  // printf("%d", sum);
  return 0;
}