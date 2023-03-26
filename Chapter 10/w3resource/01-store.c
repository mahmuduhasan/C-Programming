#include<stdio.h>

int main() {
  FILE *fptr;
  fptr = fopen("test.txt", "a");
  if(fptr == NULL){
    printf("File is not available!");
  }else{
    printf("The file test.txt created successfully...!!");
  }
  return 0;
}