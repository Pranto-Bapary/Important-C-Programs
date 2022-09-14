#include <stdio.h>
int calculateFactorial(int rem)
{
    int fact = 1, i;
    for (i = 1; i <= rem; i++)
        fact *= i;
    return fact;
}
void checkStrongNumber(int n1, int n2)
{
    int temp, sum, rem, i, j, fact;
    i = j = sum = 0;

    printf("Strong Number from %d to %d are : ", n1, n2);
    for (i = n1; i < n2; i++)
    {
        temp = i;
        while (temp != 0)
        {
            rem = temp % 10;
            fact = calculateFactorial(rem);
            sum += fact;
            temp /= 10;
        }
        if (sum == i)
            printf("%d ", i);
        sum = 0;
    }
}
int main()
{
    int n1, n2;
    printf("Enter Starting Interval : ");
    scanf("%d", &n1);

    printf("Enter Ending Interval : ");
    scanf("%d", &n2);

    checkStrongNumber(n1, n2);
    return 0;
}