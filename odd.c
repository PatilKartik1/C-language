#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter num:");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
    return 0;
}