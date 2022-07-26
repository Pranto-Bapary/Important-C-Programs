#include<stdio.h>
int main()
{
    int row,col,i,j;
    printf("Enter the Number of Row and Col : ");
    scanf("%d %d",&row,&col);
    for(i = 1; i <= row; i++)
    {
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
