#include <stdio.h>
int main()
{
    int age = 32;
    int age1 = 26;
    int *ptr = &age;
    int *ptr1 = &age1;
    //  printf("ptr is %u\n",ptr);
    //  ptr--;
    // printf("ptr is %u\n",ptr);
    // ptr++;
    // printf("ptr is %u\n",ptr);

    // difference and comparison of pointer
    printf("differen            ce is:%u\n", ptr - ptr1);
    printf("comparison is:%u\n", ptr == ptr1);
    return 0;
}