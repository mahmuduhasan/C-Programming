#include<stdio.h>

int main() {
  char firstName[50],lastName[50];
  printf("Enter your first name : ");
  scanf("%s",&firstName);
  printf("Enter your last name : ");
  scanf("%s",&lastName);
  printf("%s %s",firstName,lastName);
  return 0;
}