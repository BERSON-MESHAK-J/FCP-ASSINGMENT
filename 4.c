#include <stdio.h>

// Function to check if number is even or odd
void checkEvenOrOdd(int n)
{
    if (n % 2 == 0) 
    {
        printf("%d is even.\n", n);
    } else {
        printf("%d is odd.\n", n);
    }
}

int main()
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    checkEvenOrOdd(n);

    return 0;
}