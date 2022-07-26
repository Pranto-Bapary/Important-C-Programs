#include<stdio.h>
int main()
{
    int num,i,sum = 0;
    printf("Enter Range : ");
    scanf("%d",&num);
    for(i = 1; i <= num; i++)
        sum = sum + i;
    printf("Sum of Natural Numbers : %d\n",sum);
    return 0;
}
