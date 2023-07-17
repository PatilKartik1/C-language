#include <stdio.h> 
int main()
{
    int n;
    printf("Enter num:");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf(" sum is %d\n", sum);
    return 0;
}
