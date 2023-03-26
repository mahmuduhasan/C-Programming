#include<stdio.h>

int main(){
  float price[3];
  float final[3];
  for(int i = 0; i<3; i++){
    printf("Enter Product %d Price : ", i+1);
    scanf("%f",&price[i]);
    final[i] = (price[i] + (price[i] * 0.18));
    // printf("%f\n",final[i]);
  }
  printf("%f\n",final[0]);
  printf("%f\n", final[1]);
  printf("%f", final[2]);
  return 0;
}