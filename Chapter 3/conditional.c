#include<stdio.h>

int main() {
  //if-else
  /*int age;
  printf("Enter age : ");
  scanf("%d", &age);
  if(age>=18){
    printf("Adult \n");
  }else if(age<18 && age>13){
    printf("Teenager \n");
  }else{
    printf("Child \n");
  }
  Ternary operators
  age >= 18 ? printf("Adult \n") : age<18 && age>13 ? printf("Teenager \n") : printf("Child \n");*/
  //switch
  /*int day; //Enter 1 to 7
  printf("Enter day (1-7) : ");
  scanf("%d", &day);
  switch(day){
    case 1 : printf("Monday \n");
             break;
    case 2 : printf("Tuesday \n");
             break;
    case 3 : printf("Wednesday \n");
             break;
    case 4 : printf("Thrusday \n");
             break;
    case 5 : printf("Friday \n");
             break;
    case 6 : printf("Satuday \n");
             break;
    case 7 : printf("Sunday \n");
             break;
    default : printf("Not a valid day! \n");
  }*/

  char day; //Enter m for Monday , T for Tuesday , w for Wednesday and t , f , s , S for rest of the days.
  printf("Enter m for Monday , T for Tuesday , w for Wednesday and t , f , s , S for rest of the days : ");
  scanf("%c", &day);
  switch(day){
    case 'm' : printf("Monday \n");
             break;
    case 'T' : printf("Tuesday \n");
             break;
    case 'w' : printf("Wednesday \n");
             break;
    case 't' : printf("Thrusday \n");
             break;
    case 'f' : printf("Friday \n");
             break;
    case 's' : printf("Satuday \n");
             break;
    case 'S' : printf("Sunday \n");
             break;
    default : printf("Not a valid day! \n");
  }


  //Nested if-else , switch
  return 0;
}