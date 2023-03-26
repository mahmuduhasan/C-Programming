#include<stdio.h>
#include<string.h>
struct student{
  int roll;
  float cgpa;
  char name[100];
};

int main() {
  // struct student ECE[100];
  // ECE[0].roll = 4662;
  // ECE[0].cgpa = 3.6;
  // strcpy(ECE[0].name, "Mahmud");

  // printf("Student Name : %s\n", ECE[0].name);
  // printf("Student Roll : %d\n",ECE[0].roll);
  // printf("Student CGPA : %.1f\n", ECE[0].cgpa);

  struct student s1 = {4553, 3.2, "Mahmud"};
   printf("Student Name : %s\n", s1.name);
  printf("Student Roll : %d\n",s1.roll);
  printf("Student CGPA : %.1f\n", s1.cgpa);
  return 0;
}