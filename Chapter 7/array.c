#include<stdio.h>

int main(){
  // int marks1 = 97;
  // int marks2 = 98;
  // int marks3 = 89;

  // int marks[] = {97,98,89};

  int marks[3];
  printf("Enter Physics nymber : ");
  scanf("%d",&marks[0]);
  printf("Enter Math nymber : ");
  scanf("%d",&marks[1]);
  printf("Enter Chemistry nymber : ");
  scanf("%d",&marks[2]);

  printf("Physics mark : %d\n",marks[0]);
  printf("Math mark : %d\n",marks[1]);
  printf("Chemistry mark : %d\n",marks[2]);
  return 0;
}