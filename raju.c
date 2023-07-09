#include <stdio.h>
#include <conio.h>
#define a 100
#define b 50
#define Max(a, b) ((a) > (b) ? (a) : (b))
void main()
{
    printf("Max is %d\n", Max(a, b));
    getch();
    return 0;
}