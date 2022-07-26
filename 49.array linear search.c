#include<stdio.h>
int main()
{
    int range,num,arr[100],i,count = 0,pos = 0;
    printf("How many numbers with you want to work : ");
    scanf("%d",&range);
    printf("Enter those numbers : ");
    for(i = 0; i < range; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want to search : ");
    scanf("%d",&num);
    for(i = 0; i < range; i++)
    {
        if(arr[i] == num)
            {
                pos = i + 1;
                count++;
                break;
            }
    }
    if(count == 0)
        printf("Not Found\n");
    else
        printf("%d is Found Successfully on %dth position\n",num,pos);
    return 0;
}
