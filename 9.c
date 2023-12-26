#include <stdio.h>
#include <limits.h>

void findAverage(int array[], int n, double *average) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += array[i];
    }
    *average = (double)sum / n;
}

void findMaxMin(int array[], int n, int *max, int *min) 
{
    *max = INT_MIN;
    *min = INT_MAX;
    for (int i = 0; i < n; i++) 
    {
        if (array[i] > *max) 
        {
            *max = array[i];
        }
        if (array[i] < *min) 
        {
            *min = array[i];
        }
    }
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

    double average;
    findAverage(array, n, &average);
    printf("Average of array elements is: %.2f\n", average);

    int max, min;
    findMaxMin(array, n, &max, &min);
    printf("Max element of array is: %d\n", max);
    printf("Min element of array is: %d\n", min);

    return 0;
}