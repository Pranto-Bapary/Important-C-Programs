#include <stdio.h>
int main()
{
    int arr[100][100], i, j, row, col;
    int max, min;
    printf("Enter the number of row and col : ");
    scanf("%d %d", &row, &col);

    printf("Enter the elements of the Matrix\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter A[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    max = min = arr[0][0];

    // finding maximun and minimum elements
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j]; // Maximum

            if (arr[i][j] < min)
                min = arr[i][j]; // Minimum
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

    printf("\nMaximum Element : %d\n", max);
    printf("Minimum Element : %d\n", min);
    return 0;
}