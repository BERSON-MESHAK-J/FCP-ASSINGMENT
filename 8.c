#include <stdio.h>

int calculateSum(int array[], int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += array[i];
    }
    return sum;
}

int main() 
{
    int array[50], n, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int sum = calculateSum(array, n);
    printf("Sum of array elements is: %d", sum);

    return 0;
}