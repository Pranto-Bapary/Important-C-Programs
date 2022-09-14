#include <stdio.h>
int maximumArray(int arr[], int num)
{
    int max = arr[0];
    int i = 0;
    for (i = 0; i < num; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int minimumArray(int arr[], int num)
{
    int min = arr[0];
    int i = 0;
    for (i = 0; i < num; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main()
{
    int arr[100], num, i;

    printf("Enter the number of elements : ");
    scanf("%d", &num);

    printf("Enter the elements : ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = maximumArray(arr, num);
    int min = minimumArray(arr, num);

    printf("Maximum Element of the Array : %d\n", max);
    printf("Minimum Element of the Array : %d\n", min);

    return 0;
}