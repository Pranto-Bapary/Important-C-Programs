#include<stdio.h>
int main()
{
    int num,arr[100],even[100],odd[100],i,j,k;
    i = j = k = 0;

    printf("How many numbers do you want : ");
    scanf("%d",&num);

    for(i = 0; i < num; i++)
    {
        printf("Enter a Number for Element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < num; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            j++;
        }

        else
        {
            odd[k] = arr[i];
            k++;
        }

    }

    printf("Printing Even Numbers : ");
    for(i = 0; i < j; i++)
        printf("%d ",even[i]);

    printf("\nPrinting Even Numbers : ");
    for(i = 0; i < k; i++)
        printf("%d ",odd[i]);

    return 0;
}
