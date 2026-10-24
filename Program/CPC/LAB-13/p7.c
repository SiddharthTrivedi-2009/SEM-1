#include <stdio.h>
int main()
{
  int n, i, j, temp;
  printf("Enter N=");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (temp = 1; temp <= i; temp++)
    {
      printf(" ");
    }
    for (j = n; i <= j; j--)
    {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}