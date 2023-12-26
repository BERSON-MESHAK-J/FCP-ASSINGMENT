#include <stdio.h>

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

    printf("Odd-indexed elements are: ");
    for (i = 1; i < n; i += 2) 
    {
        printf("%d ", array[i]);
    }

    return 0;
}