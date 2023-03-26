#include<stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("test.txt", "r");
  if(fptr == NULL){
    printf("File is not available!\n");
  }else{
    char ch = fgetc(fptr);
    // fscanf(fptr, "%c", &ch);
    // printf("%c", ch);
    printf("The content of the file test.txt is  :\n");
    while(ch != EOF){
      printf("%c", ch);
      ch = fgetc(fptr);
    }
    fclose(fptr);
  }
  return 0;
}