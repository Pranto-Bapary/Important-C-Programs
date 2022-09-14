#include <stdio.h>
int main()
{
    int arr[100][100], i, j, row, col, upperSum = 0, lowerSum = 0;
    printf("Enter the value of row and column : ");
    scanf("%d %d", &row, &col);
    printf("Enter the elements of the matrix \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter A[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    // upper triangle and lower triangle findings
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (j > i)
                upperSum = upperSum + arr[i][j];

            if (i > j)
                lowerSum = lowerSum + arr[i][j];
        }
    }

    printf("Matrix = ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
        printf("\t ");
    }

    printf("\nSum of Upper Triangle Elements : %d\n", upperSum);
    printf("Sum of Lower Triangle Elements : %d\n", lowerSum);
    return 0;
}