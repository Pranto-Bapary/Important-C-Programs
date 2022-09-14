#include <stdio.h>
int sumOfNaturalNumber(int num)
{
    if (num == 1)
        return num;
    else
        return num + sumOfNaturalNumber(num - 1);
}
int main()
{
    int num;

    printf("Enter  Range : ");
    scanf("%d", &num);

    int result = sumOfNaturalNumber(num);
    printf("Sum of Natural Numbers till %d is %d\n", num, result);
    return 0;
}