#include <stdio.h>
int main()
{
  int n;
  printf("Enter two numbers:");
  scanf("%d", &n);
  if (n % 2 == 0)
  {
    printf("Even");
  }
  else
    printf("odd");

  return 0;
}