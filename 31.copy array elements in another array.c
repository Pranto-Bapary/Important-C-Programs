#include<stdio.h>
int main()
{
    int num,arr1[100],arr2[100],i,j;
    i = j = 0;
    printf("How many numbers do you want to work with : ");
    scanf("%d",&num);
    printf("Enter those numbers : ");
    for(i = 0; i < num; i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("\nCopying.....\n");
    for(i = 0; i < num; i++)
    {
        arr2[j] = arr1[i];
        j++;
    }
    printf("\nPrinting Copy Elements From Another Array : ");
    for(i = 0; i < j; i++)
    {
        printf("%d ",arr2[i]);
    }
}
