#include <stdio.h>
int main()
{
  int i, j;
  char s1[100], c;
  printf("Enter String\n");
  gets(s1);
  printf("Enter Alphabet\n");
  scanf("%c", &c);
  for (i = 0; s1[i] != '\0'; i++)
  {
    if (c == s1[i])
    {
      for (j = i; s1[j] != '\0'; j++)
      {
        printf("%c", s1[j]);
      }
      break;
    }
  }
  return 0;
}