#include <stdio.h>

int linear_search(int arr[], int n, int x) 
{
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == x) 
        {
            return i;
        }
    }
    return -1;
}

int main() 
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    printf("Enter a number to search: ");
    scanf("%d", &x);

    int result = linear_search(arr, n, x);
    if (result != -1) 
    {
        printf("Element found at index %d.\n", result);
    } else 
    {
        printf("Element not found in the array.\n");
    }

    return 0;
}