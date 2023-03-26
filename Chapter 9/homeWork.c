#include<stdio.h>

typedef struct student{
  int id;
  char name[100];
  char dept[100];
} stu;

typedef struct teacher{
  int id;
  char name[100];
} tcr;

typedef struct staff{
  int id;
  char name[100];
} stf;

void printStu(stu cse){
  printf("Id: %d , Name : %s, Department : %s\n", cse.id, cse.name, cse.dept);
}

int main() {
  int n;
  scanf("%d", &n);
  stu cse[n];
  for(int i = 0; i<n ; i++){
    printf("Enter %d student information : ", i+1);
    scanf("%d %s %s", &cse[i].id, &cse[i].name, &cse[i].dept);
  }

  for(int j = 0; j<n ; j++){
    printStu(cse[j]);
  }

  //Same for teacher
  //Same for staff
  return 0;
}