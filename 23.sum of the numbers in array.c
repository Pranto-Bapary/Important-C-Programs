#include<stdio.h>
int main()
{
    int num,arr[100],i,sum = 0;
    printf("How many numbers you want to work with : ");
    scanf("%d",&num);
    printf("Enter the numbers : ");
    for(i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum of the numbers are : %d\n",sum);
    return 0;
}
