#include<stdio.h>
#include<string.h>

struct customer{
  int id;
  char name[100];
};
void customerInfo(struct customer *cptr){
  printf("From Function Name : %s\n", (*cptr).name);
  printf("ID : %d\n", (*cptr).id);
  strcpy(cptr->name, "Mahmudul Hasan");
  cptr->id = 5;
}
int main() {
  struct customer c1 = {1,"Robiul Alam"};
  struct customer *cptr;
  printf("From Main One Name : %s\n", c1.name);
  printf("ID : %d\n", c1.id);
  cptr = &c1;
  customerInfo(cptr);
  printf("From Main Two Name : %s\n", c1.name);
  printf("ID : %d\n", c1.id);
  return 0;
}