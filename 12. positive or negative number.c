#include<stdio.h>
int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    if(num > 0)
        printf("%d is a Positive Number\n",num);
    else
        printf("%d is a Negative Number\n",num);
    return 0;
}
