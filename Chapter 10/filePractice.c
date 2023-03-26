#include<stdio.h>

int main() {
  FILE *filePTR;
  filePTR = fopen("fibonacci.c","a");
  if(filePTR == NULL){
    printf("File is not available!");
  }else{
    fprintf(filePTR, "M");
  }
  fclose(filePTR);
  return 0;
}