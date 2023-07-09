#include <stdio.h>
#include <conio.h>
int main()
{
  char C;
  printf("Enter a character:");
  scanf("%c", &C);
  printf("ascii no %c=%d", C, C);
  getch();
  return 0;
}