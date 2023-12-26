#include <stdio.h>

// Function to calculate factorial of a number
long long factorial(int n) 
{
    long long result = 1;
    for (int i = 1; i <= n; i++) 
    {
        result *= i;
    }
    return result;
}

int main() 
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Factorial of %d is %lld.\n", n, factorial(n));

    return 0;
}