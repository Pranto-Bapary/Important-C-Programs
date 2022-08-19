 #include<stdio.h>

void showStrongNumber(int range);
int calculateFactorial (int rem);

int main()
{
    int range;

    printf("Enter the Range : ");
    scanf("%d",&range);

    showStrongNumber(range);
    getch();
}

void showStrongNumber(int range)
{
    int temp,rem,fact,i,sum = 0;
    printf("Strong Numbers Between 1 to %d are : ",range);
    for(i = 1; i <= range; i++)
    {
        temp = i;
        while(temp != 0)
    {
        rem = temp % 10;
        fact = calculateFactorial(rem);
        temp /= 10;
        sum += fact;
    }

    if(sum == i)
        printf("%d ",i);
    sum = 0;

    }
}

int calculateFactorial (int rem)
{
    int j;
    int fact = 1;
    for(j = 1; j <= rem; j++)
        fact *= j;
    return fact;
}
