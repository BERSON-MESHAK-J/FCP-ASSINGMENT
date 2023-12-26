#include <stdio.h>
#include <stdlib.h>

void diagonalSum(int **arr, int n, int *sum1, int *sum2) 
{
    for (int i = 0; i < n; i++) 
    {
        *sum1 += arr[i][i];
        *sum2 += arr[i][n - i - 1];
    }
}

int main() 
{
    int i, j, n, sum1 = 0, sum2 = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int **arr = (int **) malloc(n * sizeof(int *));

    if (arr == NULL) 
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < n; i++) 
    {
        arr[i] = (int *) malloc(n * sizeof(int));

        if (arr[i] == NULL) 
        {
            printf("Memory allocation failed.\n");
            return 1;
        }
    }

    printf("Enter the elements of the matrix: ");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }

    diagonalSum(arr, n, &sum1, &sum2);

    printf("Sum of elements of the main diagonal: %d\n", sum1);
    printf("Sum of elements of the secondary diagonal: %d\n", sum2);

    for (i = 0; i < n; i++) 
    {
        free(arr[i]);
    }

    free(arr);

    return 0;
}