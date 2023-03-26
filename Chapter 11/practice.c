#include<stdio.h>
#include<stdlib.h>

int main() {
  int n;
  printf("Enter how many value you want : ");
  scanf("%d", &n);
  float *ptr = (float*) malloc(n * sizeof(float));
  for(int i = 0; i * sizeof(float) < n * sizeof(float) ; i++){
    printf("Enter %d value : ", i+1);
    scanf("%f", &ptr[i]);
  }

  for(int i = 0; i * sizeof(float) < n * sizeof(float) ; i++){
    printf("%d value : %.1f\n", i+1, ptr[i]);
  }
  return 0;
}