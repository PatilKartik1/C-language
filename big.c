#include <stdio.h>

#define ADD(a, b) ((a) + (b))
#define SUBTRACT(a, b) ((a) - (b))
#define MULTIPLY(a, b) ((a) * (b))
#define DIVIDE(a, b) ((a) / (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define Mod(a, b) ((a) % (b))
int main()
{
    int choice, num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter the operation to perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Mod\n");
    printf("6. Maximum\n");
    printf("7. Minimum\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        result = ADD(num1, num2);
        printf("The sum is: %d\n", result);
        break;
    case 2:
        result = SUBTRACT(num1, num2);
        printf("The difference is: %d\n", result);
        break;
    case 3:
        result = MULTIPLY(num1, num2);
        printf("The product is: %d\n", result);
        break;
    case 4:
        if (num2 == 0)
        {
            printf("Division by zero is not allowed.\n");
        }
        else
        {
            result = DIVIDE(num1, num2);
            printf("The quotient is: %d\n", result);
        }
        break;
    case 5:
        result = Mod(num1, num2);
        printf("Mod is :%d\n", result);
    case 6:
        result = MAX(num1, num2);
        printf("The maximum is: %d\n", result);
        break;
    case 7:
        result = MIN(num1, num2);
        printf("The minimum is: %d\n", result);
        break;
    default:
        printf("Invalid choice.\n");
        break;
    }

    return 0;
}
