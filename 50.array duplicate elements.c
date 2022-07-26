#include<stdio.h>
int main()
{
    int arr[100],num,i,j;
    i = j = 0;
    printf("How many numbers you want to work with : ");
    scanf("%d",&num);
    printf("Enter those numbers : ");
    for(i = 0; i < num; i++)
        scanf("%d",&arr[i]);

    printf("Duplicate Elements in Array are : ");
    for(i = 0; i < num; i++)
    {
        for(j = i + 1; j < num; j++)
        {
            if(arr[i] == arr[j])
                printf("%d ",arr[i]);
        }
    }
    return 0;
}
