#include<stdio.h>
int main()
{
    int num1,num2,remainder;
    float quotient;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    quotient = (float)num1/num2;
    remainder = num1 % num2;
    printf("Quotient : %.2f\n",quotient);
    printf("Remainder : %d\n",remainder);
    return 0;
}
