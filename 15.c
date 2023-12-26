#include <stdio.h>

long factorial(int n) 
{
    long result = 1;
    for (int i = 1; i <= n; i++) 
    {
        result *= i;
    }
    return result;
}

long nCr(int n, int r) 
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() 
{
    int n, r;
    printf("Enter a positive integer for n: ");
    scanf("%d", &n);
    printf("Enter a positive integer for r: ");
    scanf("%d", &r);

    printf("nCr = %ld\n", nCr(n, r));

    return 0;
}