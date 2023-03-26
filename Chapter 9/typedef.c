#include<stdio.h>

typedef struct CustomerDailyActivities{
  int id;
  char name[100];
} CusDa;

int main() {
  CusDa c1 = {1, "Mahmudul Hasan"};
  printf("Roll : %d\n", c1.id);
  printf("Name : %s\n", c1.name);
  return 0; 
}