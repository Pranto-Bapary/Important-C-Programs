#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], result[10][10];
    int i, j, k, r1, r2, c1, c2;
    int sum = 0;

input:
    printf("Enter the number of row and col for 1st Matrix : ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the number of row and col for 2nd Matrix : ");
    scanf("%d %d", &r2, &c2);

    // if c1 == r2 only then matrix multiplication will be possible
    while (c1 != r2)
    {
        printf("\nMultiplication not possible.Input row and col correctly\n\n");
        goto input;
    }

    printf("\nEnter the elements for Matrix 1\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("Enter A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the elements for Matrix 2\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("Enter B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    // Matrix Multiplication
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    printf("\nA =");
    for (i = 0; i < r1; i++)
    {
        printf("\t");
        for (j = 0; j < c1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nB =");
    for (i = 0; i < r2; i++)
    {
        printf("\t");
        for (j = 0; j < c2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    // Resultant Matrix
    printf("\nA * B =");
    for (i = 0; i < r1; i++)
    {
        printf("\t");
        for (j = 0; j < c2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}