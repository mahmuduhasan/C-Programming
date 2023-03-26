#include<stdio.h>

void printString(char arr[]){
  for(int i = 0; arr[i] != '\0' ; i++){
    printf("%c",arr[i]);
  }
  printf(" ");
}

int main() {
  // null character \0
  //char name[] = {'M', 'a', 'h','m','u','d', '\0'};
  //char name[] = "Mahmud";
  char firstName[] ="Mahmudul";
  char lastName[] = "Hasan";
  // printString(firstName);
  // printString(lastName);
  char name[] = "Mahmudul Hasan Sagar";
  char product[50];
  //printf("%s", name);
  printf("Enter product name : ");
  scanf("%s", &product);
  printf("%s",product);
  return 0;
}