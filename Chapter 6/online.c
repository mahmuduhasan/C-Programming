#include<stdio.h>
void swap(int *x, int *y, int *z){
  int temp = *x;
  *x = *z;
  *z = *y;
  *y = temp;
}
int main() {
  int a,b,c, sum;
  printf("Enter Numbers : ");
  scanf("%d %d %d", &a,&b,&c);
  printf("Before Swapping : \n");
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("c = %d\n", c);
  swap(&a, &b, &c);
  printf("After Swapping : \n");
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("c = %d\n", c);
  return 0;
}