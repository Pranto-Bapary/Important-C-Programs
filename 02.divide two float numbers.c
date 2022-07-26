#include<stdio.h>
int main()
{
    float num1,num2,result;
    printf("Enter two numbers : ");
    scanf("%f %f",&num1,&num2);
    result = num1 / num2;
    printf("Division of the two numbers : %.2f\n",result);
    return 0;
}
