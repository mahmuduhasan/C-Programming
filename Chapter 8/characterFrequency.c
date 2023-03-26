#include<stdio.h>

int main() {
  char any[100] = "mahmudul hasan";
  int flag = 0;
  char ch = 'A';
  for(int i = 0; any[i] != '\0' ; i++){
    int count = 0;
    for(int j = 0; any[j] != '\0' ; j++){
      if(any[i] == any[j]){
        count++;
      }
      if(count > flag){
        flag = count;
        ch = any[i];
      }
    }
  }
  printf("%c has got the highest frequency, which is : %d", ch, flag);
  return 0;
}