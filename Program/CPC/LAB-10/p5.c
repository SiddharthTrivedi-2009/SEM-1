#include <stdio.h>
int main()
{
  int n, digit, a = 0;
  printf("n=");
  scanf("%d", &n);
  while (n != 0)
  {
    digit = n % 10;
    a = (a * 10) + digit;
    n = n / 10;
  }
  printf("%d\t", a);
  return 0;
}