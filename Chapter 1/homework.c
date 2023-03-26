#include<stdio.h>

int main(){

  //Homework set a
  int length, width;
  printf("Enter rectangle width : ");
  scanf("%d", &width);
  printf("Enter rectangle length : ");
  scanf("%d", &length);
  int perimeter = 2 * (width + length);
  printf("Perimeter of rectangle is : %d", perimeter);

  //Homework set b
  int number;
  printf("Enter number to cube it : ");
  scanf("%d", &number);
  printf("Cube of the number is : %d", number * number * number);
  
  return 0;
}