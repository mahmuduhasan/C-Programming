#include<stdio.h>
#include<string.h>

struct Employee{
  int EID;
  // int meal_count;
  char name[100];
};

int main() {
  struct Employee s1 = {4622, "Mahmudul Hasan"};
  struct Employee *ptr;
  ptr = &s1;
  //printf("Employee ID : %d\n", (*ptr).EID);
  //can be write also like given below
  printf("Employee Name : %s\n", ptr->name);
  return 0;
}