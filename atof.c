#include <stdio.h>
int main()
{
    int marks[2][3];

    marks[0][0] = 90;
    marks[0][1] = 89;
    marks[0][2] = 78;

    marks[1][0] = 56;
    marks[1][1] = 82;
    marks[1][2] = 94;

    printf("%d", marks[1][2]);

    return 0;
}