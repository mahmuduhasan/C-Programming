#include<stdio.h>

int main(){
  char name[100] = "Mamudul Hasan";
  for(int i = 0; name[i] != '\0' ; i++){
    if(name[i] == ' '){
      name[i] = name[i+1];
      name[i+1] = ' ';
    }
  }

  printf("%s", name);
  return 0;
}