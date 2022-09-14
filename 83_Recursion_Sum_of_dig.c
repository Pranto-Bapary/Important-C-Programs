#include <stdio.h>
int sumOfDigits(int num)
{
    if (num == 0)
        return num;
    else
        return num % 10 + sumOfDigits(num / 10);
}
int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d", &num);

    int result = sumOfDigits(num);
    printf("Sum of Digits : %d\n", result);
    return 0;
}