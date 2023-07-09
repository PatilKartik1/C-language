#include <stdio.h>
int main()
{
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    int *ptr1 = &ptr;

    printf("age is %d\n", age);
    printf("%d address is %d\n", age, ptr);
    printf("%d stores %d\n", ptr, _age);
    printf("%d stores %d\n", ptr, ptr1);
    return 0;
}