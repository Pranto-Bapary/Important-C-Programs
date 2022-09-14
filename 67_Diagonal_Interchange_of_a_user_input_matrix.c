#include <stdio.h>
int main()
{
    int matrix[10][10], i, j, k, row, col, temp;
    printf("Enter the Numbers of Row and Col : ");
    scanf("%d %d", &row, &col);
    printf("Enter the Elements\n\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Input Matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    // Before Interchanging Diagonals
    printf("\nBefore Interchanging Diagonals : \n");
    for (i = 0; i < row; i++)
    {
        printf("\t");
        for (j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Interchanging Diagonals
    k = col - 1;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
            {
                temp = matrix[i][j];
                matrix[i][j] = matrix[i][k];
                matrix[i][k] = temp;
                k--;
            }
        }
    }

    // After Interchanging Diagonals
    printf("\nAfter Interchanging Diagonals : \n");
    for (i = 0; i < row; i++)
    {
        printf("\t");
        for (j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}