#include <stdio.h>
int main()
{
  int n, i, m;
  printf("n=");
  scanf("%d", &n);
  int a[n];
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("Enter Number = ");
  scanf("%d", &m);
  for (i = 0; i < n; i++)
  {
    if (a[i] == m)
    {
      printf("%d number is availabel", m);
      break;
    }
  }
  return 0;
}