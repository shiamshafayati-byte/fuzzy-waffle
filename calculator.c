#include<stdio.h>
#include<math.h>

int main()
{
    int choice, a, b, i, fact = 1;
    float x, y;

    printf("===== Calculator =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Square\n");
    printf("7. Cube\n");
    printf("8. Square Root\n");
    printf("9. Power\n");
    printf("10. Factorial\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            printf("Addition = %d", a + b);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            printf("Subtraction = %d", a - b);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            printf("Multiplication = %d", a * b);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f%f", &x, &y);
            printf("Division = %.2f", x / y);
            break;

        case 5:
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            printf("Modulus = %d", a % b);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &a);
            printf("Square = %d", a * a);
            break;

        case 7:
            printf("Enter a number: ");
            scanf("%d", &a);
            printf("Cube = %d", a * a * a);
            break;

        case 8:
            printf("Enter a number: ");
            scanf("%f", &x);
            printf("Square Root = %.2f", sqrt(x));
            break;

        case 9:
            printf("Enter base and power: ");
            scanf("%f%f", &x, &y);
            printf("Power = %.2f", pow(x, y));
            break;

        case 10:
            printf("Enter a number: ");
            scanf("%d", &a);

            fact = 1;
            for(i = 1; i <= a; i++)
            {
                fact = fact * i;
            }

            printf("Factorial = %d", fact);
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}
