#include<stdio.h>
int main()
{
    int num,rem,rev,temp;
    rev = 0;
    printf("Enter a Number : ");
    scanf("%d",&num);
    temp = num;
    while(temp != 0)
    {
        rem = temp % 10;
        rev = (rev * 10) + rem;
        temp = temp / 10;
    }
    if(num == rev)
        printf("%d is a Palindrome Number\n",num);
    else
        printf("%d is not a Palindrome Number\n",num);
    return 0;
}
