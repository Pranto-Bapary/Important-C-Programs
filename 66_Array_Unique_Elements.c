#include <stdio.h>
int main()
{
    int arr[100], num, i, j, count;
    i = j = 0;

    printf("Enter the number of elements : ");
    scanf("%d", &num);

    printf("Enter the elements : ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Unique Elements are : ");
    for (i = 0; i < num; i++)
    {
        count = 0;
        for (j = 0; j < num; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                    count++;
            }
        }
        if (count == 0)
            printf("%d ", arr[i]);
    }
    return 0;
}