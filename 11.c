#include <stdio.h>

void addMatrices(int fm[3][3], int sm[3][3], int result[3][3]) 
{
    int i, j;

    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            result[i][j] = fm[i][j] + sm[i][j];
        }
    }
}

int main() 
{
    int fm[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sm[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
    int result[3][3];
    int i, j;

    addMatrices(fm,sm,result);
    printf("Result matrix: \n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}