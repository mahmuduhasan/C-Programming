#include<stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("newTest.txt", "a");
  if(fptr == NULL){
    printf("File is not available!");
  }else{
    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'H');
    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'U');
    fprintf(fptr, "%c", 'D');
    fclose(fptr);
  }
  return 0;
}