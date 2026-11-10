// Print the elements stored in the array
#include <stdio.h>
int main()
{
  int a[2][2], b[2][2], sum[2][2], i, j;
  //read elements for the first matrix
  printf("\nEnter elements of 1st matrix:\n");
  for(int i = 0; i < 2; ++i)
  {
   for(int j = 0; j < 2; ++j)
  {
  scanf("%d", &a[i][j]);
  }
  }
  //read elements for the second matrix
  printf("\nEnter elements of 1st matrix:\n");
  for(int i= 0; i < 2; ++i)
  {
    for(int j= 0; j < 2; ++j)
  {
  scanf("%d", &b[i][j]);
  }
  }
  for(i=0;i<2;i++)
    for(j=0;j<2;j++)
    c[i][j] =(a[i][j]+ b[i][j]);
   printf("elements of 1st matrix:\n");
    for(int i= 0; i < 2; ++i)
  {
    for(int j= 0; j < 2; ++j)
  {
  printf("%d", &a[i][j]);
  }
  }
  //read elements for the second matrix
   printf("elements of 2nd matrix:\n");
    for(int i= 0; i < 2; ++i)
  {
    for(int j= 0; j < 2; ++j);
  {
  }
  printf("Addition =\n");
  for(i=0;i<2;i++)
  {
      for(j=0;j<2;j++)
        printf("%d\t",C[i][j]);
      printf("|n");
  }
  return 0;
  }
