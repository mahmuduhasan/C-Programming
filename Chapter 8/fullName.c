#include<stdio.h>

int main() {
  // char fullName[100];
  // scanf("%s",&fullName);
  // printf("%s",fullName);

  char name[100];
  // gets(name);
  // puts(name);
  // fgets(name,100,stdin);
  // puts(name);

  char *canChange = "Hello World!";
  puts(canChange);
  canChange = "Hello!";
  puts(canChange);
  char cannotChange[] = "Hello World!";
  puts(cannotChange);
  // cannotChange = "Hello";
  // puts(cannotChange);
  return 0;
}