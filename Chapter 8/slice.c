#include<stdio.h>
#include<string.h>
int main(){
  int n, m;
  char input[100] = "IamHasanAlMahmud";
  scanf("%d",&n);
  scanf("%d",&m);
  char sliced[50];
  int j = 0;
  for(int i = n; i<=m ; i++, j++){
    sliced[j] = input[i];
  }
  sliced[j] = '\0';
  printf("%s", sliced);
  return 0;
}