#include<stdio.h>
int main()
{
    int num,arr[100],max,min,i,sum;
    float avg;
    printf("How many numbers you want to work with : ");
    scanf("%d",&num);
    printf("Enter the numbers : ");
    for(i = 0; i < num; i++)
    {
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    min = arr[0];
    sum = 0;
    for(i = 0; i < num; i++)
    {
        sum = sum + arr[i];
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    avg = (float)sum / num;
    printf("Largest Number    : %d\n",max);
    printf("Smallest Number   : %d\n",min);
    printf("Sum of the Number : %d\n",sum);
    printf("Average Number    : %.2f\n",avg);
    return 0;
}
