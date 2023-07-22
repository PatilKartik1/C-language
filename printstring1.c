#include <stdio.h>
int printlength(char arr[]);
int main()
{
    char name[100];

    gets(name);
    printf("Name is : %d", printlength(name));

    return 0;
}

int printlength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] = '\0'; i++)
    {
        count++;
    }
    return count;
}
