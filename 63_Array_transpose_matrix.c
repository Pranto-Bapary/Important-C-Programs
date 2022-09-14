#include <stdio.h>
int main()
{
    int matrix[10][10], transpose[10][10];
    int i, j, row, col;
    printf("Enter the number of row and col : ");
    scanf("%d %d", &row, &col);

    printf("Enter the values of the Matrix\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter Matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    // Transpose
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
        printf("\n");
    }

    printf("\nOriginal Matrix =");
    for (i = 0; i < row; i++)
    {
        printf("\t");
        for (j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
        printf("\t\t");
    }

    printf("\nTranspose Matrix =");
    for (i = 0; i < col; i++)
    {
        printf("\t");
        for (j = 0; j < row; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
        printf("\t\t");
    }

    return 0;
}