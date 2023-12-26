#include <stdio.h>

// Function to calculate sum of natural numbers
int sumOfNaturalNumbers(int n) 
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}

int main() 
{
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int sum = sumOfNaturalNumbers(n);

    printf("Sum of natural numbers up to %d is: %d\n", n, sum);

    return 0;
}
