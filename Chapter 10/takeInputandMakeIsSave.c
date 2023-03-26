#include<stdio.h>

typedef struct StudentInformation{
  int id;
  char firstname[100];
  char lastname[100];
  float cgpa;
} StuInfo;

int main() {
  int n;
  printf("Enter how many student you want to save : ");
  scanf("%d", &n);
  StuInfo student[n];
  FILE *fptr = fopen("student.txt", "a");
  for(int i = 0; i<n ; i++){
    printf("Enter %d student info : \n", i+1);
    printf("ID : ");
    scanf("%d", &student[i].id);
    printf("First Name : ");
    scanf("%s", &student[i].firstname);
    printf("Last Name : ");
    scanf("%s", &student[i].lastname);
    printf("CGPA : ");
    scanf("%f", &student[i].cgpa);
    fprintf(fptr, "%d student info is: \n", i+1);
    fprintf(fptr, "ID : %d\n", student[i].id);
    fprintf(fptr, "Name : %s %s\n", student[i].firstname , student[i].lastname);
    fprintf(fptr, "CGPA : %.1f\n", student[i].cgpa);
  }
  fclose(fptr);
  return 0;
}