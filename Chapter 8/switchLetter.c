#include<stdio.h>

int main() {
  char name[100] = "Mahmudul Hasan";
  for(int i = 0; name[i] != '\0'; i++){
    if(name[i] == ' '){
      continue;
    }
    if(name[i] < 91){
      name[i] = ascii + 32;
    }else{
      name[i] = ascii - 32;
    }
  }
  printf("%s", name);
  return 0;
}