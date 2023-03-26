#include<stdio.h>

int main() {
  char fullName[100];
  char ch;
  int i = 0;
  for(i = 0; ch != '\n' ; i++){
    scanf("%c", &ch);
    fullName[i] = ch;
  }
  fullName[i] = '\0';
  puts(fullName);
  return 0;
}