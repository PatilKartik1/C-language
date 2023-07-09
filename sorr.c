#include <stdio.h>
void printhello(int n);
int main()
{
    printhello(9);
    return 0;
}

void printhello(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("Hello\n");
    printhello(n - 1);
}