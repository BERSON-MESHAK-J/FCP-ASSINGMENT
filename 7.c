#include <stdio.h>

int findLargest(int array[], int n) 
{
    int max = array[0];
    for (int i = 1; i < n; i++) 
    {
        if (array[i] > max) 
        {
            max = array[i];
        }
    }
    return max;
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

    int max = findLargest(array, n);
    printf("Largest element is: %d", max);

    return 0;
}