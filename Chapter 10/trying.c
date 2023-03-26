#include<stdio.h>

int main(){
  FILE *fptr;
  fptr = fopen("D:\\Loser\\01.14.23_C_Programming\\interviewTypeThing.c", "r");
  if(fptr == NULL){
    printf("File is not availabe!\n");
  }else{
    char ch[100];
    fscanf(fptr, "%s", &ch);
    printf("%s", ch);
  }
  return 0;
}