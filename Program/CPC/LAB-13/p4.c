#include <stdio.h>
int main()
{
  int n, i, j, temp;
  printf("Enter N=");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (temp = 1; temp <= n - i; temp++)
    {
      printf(" ");
    }
    for (j = 1; j <= i; j++)
    {
      printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}