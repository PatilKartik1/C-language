#include <stdio.h>
#include <conio.h>
#define squ(x) (x) * (x)
#define cube(x) squ(x) * (x)
int main()
{
    int x, y;
    x = squ(4);
    y = cube(4);
    printf("square of 3: %d\n", x);
    printf("cube of 3: %d\n", y);
    return 0;
}