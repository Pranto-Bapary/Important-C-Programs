#include<stdio.h>
int main()
{
    int num,arr[100],pos,i;
    printf("Enter the number of elements : ");
    scanf("%d",&num);
    printf("Enter those elements : ");
    for(i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the position of the value to delete : ");
    scanf("%d",&pos);

    for(i = pos - 1; i < num - 1; i++)
    {
        arr[i] = arr[i+1];
    }

    for(i = 0; i < num - 1; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
