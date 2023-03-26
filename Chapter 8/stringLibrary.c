#include<stdio.h>
#include<string.h>
int main(){
  //char name[100];
  // fgets(name,100,stdin);
  // printf("%d", strlen(name));
  char firstName[] = "Mahmudul";
  char lastName[] = " Hasan";
  // strcpy(firstName,lastName);
  // puts(firstName);
  //First string(firstName) must be equal or greater than second string(lastName)
  // strcat(firstName,lastName);
  // puts(firstName);
  char apple[] = "Apple";
  char banana[] = "Banana";
  printf("%d", strcmp(banana,apple));
  return 0;
}