#include <stdio.h>

int main()
{
    int n;
    printf("Enter n (n>2):");
    scanf("%d", &n);

    int fin[n];
    fin[0] = 0;
    fin[1] = 1;

    for (int i = 2; i < n; i++)
    {
        fin[i] = fin[i - 1] + fin[i - 2];
        printf("%d\t", fin[i]);
    }

    return 0;
}