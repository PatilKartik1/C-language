// C program to swap two variables
#include <stdio.h>

int main()
{
	int x, y;
	printf("Enter Value of x and y ");
	scanf("%d%d", &x, &y);

	int temp = x;
	x = y;
	y = temp;

	printf("\nAfter Swapping: x = %d, y = %d", x, y);
	return 0;
}
