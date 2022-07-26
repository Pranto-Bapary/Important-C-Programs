#include<stdio.h>
int main()
{
    int num,fibo[100],i;
    printf("How Many Fibonacci Numbers : ");
    scanf("%d",&num);
    fibo[0] = 0;
    fibo[1] = 1;
    for(i = 2; i < num; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    printf("%d %d ",fibo[0],fibo[1]);
    for(i = 2; i < num; i++)
        printf("%d ",fibo[i]);
    return 0;
}
