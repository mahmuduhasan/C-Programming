#include<stdio.h>
#include<string.h>

typedef struct AddressOfPeople{
  int house_no;
  int block;
  char city[20];
  char state[20];
} aop;

int main(){
  int n;
  printf("Enter number : ");
  scanf("%d",&n);
  aop address[n];
  for(int i = 0; i<n ; i++){
    printf("Enter %d person info : \n", i+1);
    scanf("%d", &address[i].house_no);
    scanf("%d", &address[i].block);
    scanf("%s", &address[i].city);
    scanf("%s", &address[i].state);
  }

  for(int i = 0; i<n ; i++){
    printf("%d person info : \n", i+1);
    printf("%d %d %s %s\n", address[i].house_no,address[i].block,address[i].city,address[i].state);
  }
  // printf("Enter first person info : \n");
  // scanf("%d", &address[0].house_no);
  // scanf("%d", &address[0].block);
  // scanf("%s", &address[0].city);
  // scanf("%s", &address[0].state);
  // printf("Enter second person info : \n");
  // scanf("%d", &address[1].house_no);
  // scanf("%d", &address[1].block);
  // scanf("%s", &address[1].city);
  // scanf("%s", &address[1].state);
  // printf("Enter third person info : \n");
  // scanf("%d", &address[2].house_no);
  // scanf("%d", &address[2].block);
  // scanf("%s", &address[2].city);
  // scanf("%s", &address[2].state);
  // printf("Enter fourth person info : \n");
  // scanf("%d", &address[3].house_no);
  // scanf("%d", &address[3].block);
  // scanf("%s", &address[3].city);
  // scanf("%s", &address[3].state);
  // printf("Enter fifth person info : \n");
  // scanf("%d", &address[4].house_no);
  // scanf("%d", &address[4].block);
  // scanf("%s", &address[4].city);
  // scanf("%s", &address[4].state);

  // printf("First person info : \n");
  // printf("%d", address[0].house_no);
  // printf("%d", address[0].block);
  // printf("%s", address[0].city);
  // printf("%s", address[0].state);
  // printf("Enter second person info : \n");
  // printf("%d", address[1].house_no);
  // printf("%d", address[1].block);
  // printf("%s", address[1].city);
  // printf("%s", address[1].state);
  // printf("Enter third person info : \n");
  // printf("%d", address[2].house_no);
  // printf("%d", address[2].block);
  // printf("%s",address[2].city);
  // printf("%s", address[2].state);
  // printf("Enter fourth person info : \n");
  // printf("%d", address[3].house_no); 
  // printf("%d", address[3].block);
  // printf("%s", address[3].city);
  // printf("%s", address[3].state);
  // printf("Enter fifth person info : \n");
  // printf("%d", address[4].house_no);
  // printf("%d", address[4].block);
  // printf("%s", address[4].city);
  // printf("%s", address[4].state);
  return 0;
}