#include<stdio.h>
int main()
{
    int num,d1,d2,d3,rev;

    printf("Enter a Number of 3 Digits : "); //123
    scanf("%d",&num);

    d3 = num % 10;
    d2 = num % 100 / 10;
    d1 = num % 1000 / 100;
    rev = d3 * 100 + d2 * 10 + d1;

    printf("Reverse of the Number : %d\n",rev);
    return 0;
}
