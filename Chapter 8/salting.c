#include<stdio.h>
#include<string.h>

void salting(char pass[]){
  char saltValue[] = "123";
  char newPassword[200];
  strcpy(newPassword,pass);
  strcat(newPassword,saltValue);
  printf("I am from salting : \n");
  puts(newPassword);
}

int main(){
  char password[100];
  // fgets(password, 100, stdin);
  scanf("%s", &password);
  salting(password);
  printf("I am from main : \n");
  puts(password);
  return 0;
}