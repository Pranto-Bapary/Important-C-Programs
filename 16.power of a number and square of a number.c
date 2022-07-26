#include<stdio.h>
#include<math.h>
int main()
{
    int num,power,result;
    printf("Enter a Number : ");
    scanf("%d",&num);
    printf("Enter the Power : ");
    scanf("%d",&power);
    result = pow(num,power);
    printf("Power of the Number %d^%d = %d\n",num,power,result);
    result = pow(num,2);
    printf("Square of the Number %d^2 = %d\n",num,result);
    return 0;
}
