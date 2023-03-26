#include<stdio.h>

int countLength(char arr[]){
  int counter = 0;
  for (int i = 0; arr[i] != '\0'; i++){
    counter++;
  }
  return counter-1;
}

int main() {
  char name[100];
  fgets(name,100,stdin);
  printf("%d", countLength(name));
  return 0;
}