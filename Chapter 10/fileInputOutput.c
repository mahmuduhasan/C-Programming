#include<stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("newTest.txt", "r");
  if(fptr == NULL){
    printf("File doesn't exist.\n");
  }else{
    int ch;
    fscanf(fptr, "%d", &ch);
    printf("Character = %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("Character = %d\n", ch);
    fscanf(fptr, "%d", &ch);
    printf("Character = %d\n", ch);
    fclose(fptr);
  }

  return 0;
}