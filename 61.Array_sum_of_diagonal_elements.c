#include <stdio.h>
int main()
{
    int arr[100][100], i, j, row, col, sum = 0;
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

    printf("Diagonal Elements : ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
            {
                printf("%d ", arr[i][j]);
                sum += arr[i][j];
            }
        }
    }
    printf("\nSum of Diagonal Elements : %d\n", sum);
    return 0;
}