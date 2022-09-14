#include <stdio.h>
int fibonacci(int num)
{
    if (num == 0)
        return 0;

    else if (num == 1)
        return 1;

    else
        return fibonacci(num - 1) + fibonacci(num - 2);
}
int main()
{
    int num, i;
    printf("Enter a Number : ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
        printf("%d ", fibonacci(i));

    return 0;
}