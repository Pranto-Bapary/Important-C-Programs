#include<stdio.h>
int main()
{
    int n1,n2,arr1[100],arr2[100],arr3[100],i,j,k;
    i = j = k = 0;

    printf("Enter the size of first array : ");
    scanf("%d",&n1);

    printf("Enter elements for first array : ");
    for(i = 0; i < n1; i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("Enter the size of second array : ");
    scanf("%d",&n2);

    printf("Enter elements for second array : ");
    for(j = 0; j < n2; j++)
    {
        scanf("%d",&arr2[j]);
    }

    for(i = 0; i < n1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(arr1[i] == arr2[j])
                {
                    arr3[k] = arr1[i];
                    k++;
                }
        }
    }

    printf("Common Elements in the Array are : ");
    for(i = 0; i < k; i++)
    {
        printf("%d ",arr3[i]);
    }
    return 0;
}
