#include<stdio.h>
int main()
{
    int num1,num2,gcd,lcm,small,i;

    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);

    small = (num1 > num2)? num1 : num2;
    for(i = 1; i <= small; i++)
        if(num1 % i == 0 && num2 % i == 0)
            gcd = i;
    lcm = (num1 * num2) / gcd;

    printf("GCD of %d and %d is %d\n",num1,num2,gcd);
    printf("LCM of %d and %d is %d\n",num1,num2,lcm);
    return 0;
}
