#include<stdio.h>
int main()
{
    int num,d1,d2,d3,sum = 0;

    printf("Enter a Number of 5 Digits : ");
    scanf("%d",&num);

    d3 = num % 10;
    d2 = (num % 100) / 10;
    d1 = (num % 1000) /100;
    sum = d1 + d2 + d3;

    printf("Sum of Digits : %d\n",sum);
    return 0;
}
