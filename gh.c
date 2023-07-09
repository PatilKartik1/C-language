#include <stdio.h>

#define ADDITION 1
#define SUBTRACTION 2
#define MULTIPLICATION 3
#define DIVISION 4
#define MINIMUM 5
#define MAXIMUM 6

int main()
{
    int choice;
    float num1, num2, result;

    printf("Select an option:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Minimum\n");
    printf("6. Maximum\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case ADDITION:
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        result = num1 + num2;
        printf("Result = %.2f\n", result);
        break;
    case SUBTRACTION:
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        result = num1 - num2;
        printf("Result = %.2f\n", result);
        break;
    case MULTIPLICATION:
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        result = num1 * num2;
        printf("Result = %.2f\n", result);
        break;
    case DIVISION:
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        if (num2 == 0)
        {
            printf("Error: division by zero\n");
        }
        else
        {
            result = num1 / num2;
            printf("Result = %.2f\n", result);
        }
        break;
    case MINIMUM:
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        result = num1 < num2 ? num1 : num2;
        printf("Minimum = %.2f\n", result);
        break;
    case MAXIMUM:
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
        result = num1 > num2 ? num1 : num2;
        printf("Maximum = %.2f\n", result);
        break;
    default:
        printf("Invalid choice\n");
        break;
    }

    return 0;
}
