#include<stdio.h>

int main(){
  char input[100] = "Ami je tomAr";
  char vowelUppper[6] = "AEIOU";
  char vowelLower[6] = "aeiou";
  int vowelCount = 0;
  for(int i = 0; input[i] != '\0'; i++){
    for(int j = 0; vowelUppper[j]!='\0', vowelLower[j] != '\0'; j++){
      if(input[i] == vowelUppper[j] || input[i] == vowelLower[j]){
        vowelCount++;
      }
    }
  }
  printf("Number of vowel is : %d", vowelCount);
  return 0;
}