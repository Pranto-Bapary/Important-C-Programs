#include <stdio.h>
int main()
{
    int matrix[10][10], i, j, row, col, identity = 0;
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

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j && matrix[i][j] != 1)
            {
                identity = 1;
                break;
            }
            else if (i != j && matrix[i][j] != 0)
            {
                identity = 1;
                break;
            }
        }
    }

    if (identity == 0)
    {
        for (i = 0; i < row; i++)
        {
            printf("\t");
            for (j = 0; j < col; j++)
            {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
        printf("The given matrix is an Identity Matrix\n");
    }
    else
        printf("The given matrix is not an Identity Matrix\n");

    return 0;
}