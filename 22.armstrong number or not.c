#include<stdio.h>
int main()
{
    int num,rem,sum,temp;
    sum = 0;
    printf("Enter a Number : ");
    scanf("%d",&num);

    temp = num;
    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }
    if(num == sum)
        printf("%d is a Armstrong Number\n",num);
    else
        printf("%d is not a Armstrong Number\n",num);
    return 0;
}
