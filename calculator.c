#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double a, b;

    printf("1.Add 2.Sub 3.Multi 4.Div 5.Mod 6.Square 7.Cube 8.Sqrt 9.Power 10.Factorial\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            scanf("%lf %lf", &a, &b);
            printf("Result = %.2lf\n", a + b);
            break;
        case 2:
            scanf("%lf %lf", &a, &b);
            printf("Result = %.2lf\n", a - b);
            break;
        case 3:
            scanf("%lf %lf", &a, &b);
            printf("Result = %.2lf\n", a * b);
            break;
        case 4:
            scanf("%lf %lf", &a, &b);
            printf("Result = %.2lf\n", a / b);
            break;
        case 5:
            scanf("%lf %lf", &a, &b);
            printf("Result = %d\n", (int)a % (int)b);
            break;
        case 6:
            scanf("%lf", &a);
            printf("Square = %.2lf\n", a * a);
            break;
        case 7:
            scanf("%lf", &a);
            printf("Cube = %.2lf\n", a * a * a);
            break;
        case 8:
            scanf("%lf", &a);
            printf("Sqrt = %.2lf\n", sqrt(a));
            break;
        case 9:
            scanf("%lf %lf", &a, &b);
            printf("Power = %.2lf\n", pow(a, b));
            break;
        case 10:
            scanf("%lf", &a);
            long long fact = 1;
            for (int i = 1; i <= (int)a; i++)
                fact *= i;
            printf("Factorial = %lld\n", fact);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}