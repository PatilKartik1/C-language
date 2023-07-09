#include <stdio.h>
#include <conio.h>
void printtable(int n);
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    printtable(n);
}

void printtable(int n)
{
    for (int i = 0; i <= 10; i++)
    {
        printf("%d\n", n * i);
    }
}
