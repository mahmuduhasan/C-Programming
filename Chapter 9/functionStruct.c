#include<stdio.h>
#include<string.h>
struct student{
  int roll;
  char name[100];
};

void studentInfo(struct student s1){
  s1.roll = 4622;
  strcpy(s1.name,"Mahmudul Hasan");
  printf("Roll : %d\n", s1.roll);
  printf("Name : %s\n", s1.name);
}

int main() {
  struct student s1;
  studentInfo(s1);
  return 0;
}