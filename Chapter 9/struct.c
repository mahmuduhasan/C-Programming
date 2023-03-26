#include<stdio.h>
#include<string.h>
struct student{
  int roll;
  float cgpa;
  char name[100];
};
int main() {
  struct student s1;
  struct student s2;
  struct student s3;
  s1.roll = 4622;
  s2.roll = 4627;
  s3.roll = 4631;
  s1.cgpa = 3.4;
  s2.cgpa = 4.0;
  s3.cgpa = 2.9;
  //s1.name = "Mahmud";
  strcpy(s1.name, "Mahmud");
  strcpy(s2.name, "Sourav");
  strcpy(s3.name, "Susmita");
  printf("Student name : %s\n", s1.name);
  printf("Student roll : %d\n", s1.roll);
  printf("Student CGPA : %.1f\n", s1.cgpa);
  printf("Student name : %s\n", s2.name);
  printf("Student roll : %d\n", s2.roll);
  printf("Student CGPA : %.1f\n", s2.cgpa);
  printf("Student name : %s\n", s3.name);
  printf("Student roll : %d\n", s3.roll);
  printf("Student CGPA : %.1f\n", s3.cgpa);
  return 0;
}