#include<stdio.h>
int main()
{
    int num,value,arr[100],i,pos;

    printf("Enter the number of elements : ");
    scanf("%d",&num);

    printf("Enter those elements : ");
    for(i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the value you want to insert : ");
    scanf("%d",&value);

    printf("Enter the position where you want to insert : ");
    scanf("%d",&pos);

    for(i = num - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = value;
    printf("\nInserted successfully..........\n");
    printf("\nPrinting updated elements : ");
    for(i = 0; i <= num; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
