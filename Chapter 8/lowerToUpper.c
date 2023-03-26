#include<stdio.h>

int main() {
  char name[100] = "Mahmudul Hasan";
  char vowels[50] = "aeiou";
  for(int i = 0; name[i] != '\0'; i++){
    for(int j = 0; vowels[j] != '\0' ; j++){
      int ascii = 0;
      if(name[i] == vowels[j]){
        name[i] = vowels[j]-32;
      }
    }
  }
  printf("%s", name);
  return 0;
}