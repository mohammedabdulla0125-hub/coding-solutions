// Print the elements stored in the array
#include <stdio.h>
int main()
{
  int values[5];
  printf("Enter 5 integers:");
  // takeing input and storing it in an array
  for(int i = 0; i < 5; ++i)
  {
  scanf("%d", &values[i]);
  }
  printf("Displaying integers: ");
  // printing element of the array
  for(int i= 0; i < 5; ++i)
  {
  printf("%d\n", values[i]);
  }
  return 0;
  }
