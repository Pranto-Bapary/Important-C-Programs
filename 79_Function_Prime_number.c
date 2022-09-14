#include <stdio.h>
void checkPrimeNumber(int n1, int n2)
{
    int temp, rem, sum, i, j, count;
    i = j = sum = count = 0;

    printf("Prime Numbers from %d to %d are : ", n1, n2);
    for (i = n1; i < n2; i++)
    {
        for (j = 2; j < n2; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 1)
            printf("%d ", i);
        count = 0;
    }
}
int main()
{
    int n1, n2;
    printf("Enter Starting Interval : ");
    scanf("%d", &n1);

    printf("Enter Ending Interval : ");
    scanf("%d", &n2);
    checkPrimeNumber(n1, n2);
    return 0;
}