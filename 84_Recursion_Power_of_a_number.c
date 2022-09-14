#include <stdio.h>
int powerOfNumber(int base, int exp)
{
    if (exp == 0)
        return 1;
    else
        return base * powerOfNumber(base, exp - 1);
}
int main()
{
    int base, exp;
    printf("Enter Base and Exponential : ");
    scanf("%d %d", &base, &exp);

    int result = powerOfNumber(base, exp);
    printf("Power of %d^%d = %d\n", base, exp, result);
    return 0;
}