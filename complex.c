#include <stdio.h>

struct complex
{
    int real;
    int img;
};

int main()
{
    struct complex n1 = {5, 8};
    struct complex *ptr = &n1;
    printf("real is %d\n", ptr->real);
    printf("Img is %d\n", ptr->img);
    return 0;
}