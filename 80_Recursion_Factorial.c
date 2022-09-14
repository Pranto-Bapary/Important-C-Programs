#include <stdio.h>
int factorial(int num)
{
    if (num == 1)
        return num;
    else
        return num * factorial(num - 1);
}
int main()
{
    int num;

    printf("Enter a Number : ");
    scanf("%d", &num);

    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);
    return 0;
}