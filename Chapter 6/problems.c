#include<stdio.h>

// void swap(int *a , int *b){
//   int temp = *a;
//   *a = *b;
//   *b = temp;
//   printf("After Swap : \n");
//   printf("a is : %d\n", *a);
//   printf("b is : %d\n", *b);
// }

void maxMin(int a, int b, int *max, int *min){
  if(a>b){
    *max = a;
    *min = b;
  }else if(a<b){
    *max = b;
    *min = a;
  }else{
    printf("Equal!");
  }
}

int main() {
  int x = 8; 
  int y = 10;
  // printf("Before Swap : \n");
  // printf("a is : %d\n", x);
  // printf("b is : %d\n", y);
  // swap(&x, &y  );
  // printf("a is : %d\n", x);
  // printf("b is : %d\n", y);
  int min = 0,max = 0;
  maxMin(x,y,&max,&min);
  printf("Max is : %d\n", max);
  printf("Min is : %d\n", min);
  return 0;
}