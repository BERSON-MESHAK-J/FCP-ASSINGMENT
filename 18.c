#include <stdio.h>
#include <math.h>

void add() 
{
    double num1, num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Result: %.2lf\n", num1 + num2);
}

void subtract() 
{
    double num1, num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Result: %.2lf\n", num1 - num2);
}

void multiply() 
{
    double num1, num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Result: %.2lf\n", num1 * num2);
}

void divide() 
{
    double num1, num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    if(num2 == 0) 
    {
        printf("Error! Division by zero is not allowed.\n");
    } else 
    {
        printf("Result: %.2lf\n", num1 / num2);
    }
}

void exponent() 
{
    double num1, num2;
    printf("Enter base number: ");
    scanf("%lf", &num1);
    printf("Enter exponent: ");
    scanf("%lf", &num2);
    printf("Result: %.2lf\n", pow(num1, num2));
}

int main() 
{
    int choice;

    do 
    {
        printf("\nChoose an operation:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exponent\n");
        printf("6. Exit\n");
        scanf("%d", &choice);

        switch(choice) 
        {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                exponent();
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please choose a valid operation.\n");
        }
    } while(choice != 6);

    return 0;
}