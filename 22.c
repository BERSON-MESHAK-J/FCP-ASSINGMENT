#include <stdio.h>

// Recursive function to calculate factorial
unsigned long long factorial(int n) 
{
    if (n == 0) 
    {
        return 1;
    } else 
    {
        return n * factorial(n - 1);
    }
}

int main() 
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factorial of %d = %llu", num, factorial(num));
    return 0;
}