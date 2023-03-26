#include<stdio.h>

int main() {
  int mark;
  printf("Enter mark (1-100): ");
  scanf("%d", &mark);
  // if(mark >=0 && mark <= 30) {
  //   printf("You are failed!");
  // }else if(mark>30 && mark<=100){
  //   printf("You are passed!");
  // }else{
  //  printf("Wrong input!");
  // }

  //mark > 30 && mark <=100 ? printf("You are passed!") : mark<=30 && mark >=0 ? printf("You are failed!") : printf("Wrong input!");

  /*int flag = mark >=0 && mark <=100 ;
  int result = mark > 30;
  switch (flag) {
  case 1:
    switch(result){
      case 1 : 
        printf("PASS!");
        break;
      case 0 :
        printf("FAIL!");
        break;
    }
    break;
  case 0:
    printf("STUPIDITY!");
    break;
  } */

  // mark > 100 || mark < 0 ? printf("Wrong input") : mark < 30 ? printf("Your grade is : C!") : mark < 70 && mark >= 30 ? printf("Your grade is : B!") : mark < 90 && mark >= 70 ? printf("Your grade is : A!") : printf("Your grade is : A+ ! WOW!");
  return 0;
}