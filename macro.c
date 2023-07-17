#include <stdio.h>
#include <conio.h>
#define AREA length *breadth
void main()
{
   int length, breadth;
   printf("enter lenghth and breadth\n");
   scanf("%d%d", &length, &breadth);
   printf("lenghth= %d breadth=%d\n", length, breadth);
   printf("InArea=%d square unit\n", AREA);
   getch();
}