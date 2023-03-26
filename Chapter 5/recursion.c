#include<stdio.h>

void recursion ( int count){
  if(count == 0){
    return;
  }
  printf("Hello World! \n");
  recursion(count - 1);
}

int main() {
  recursion(4);
  return 0;
}