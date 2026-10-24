#include <stdio.h>
int main()
{
  int n, oddnum, evennum, i;
  i = 1, oddnum = 0, evennum = 0;
  while (i <= 10)
  {
    printf("n=");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
      evennum = evennum + 1;
    }
    else
    {
      oddnum = oddnum + 1;
    }
    i = i + 1;
  }
  printf("evennum=%d", evennum);
  printf("oddnum=%d", oddnum);
  return 0;
}