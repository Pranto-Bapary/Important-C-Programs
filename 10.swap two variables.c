#include<stdio.h>
int main()
{
    int var1,var2,temp;
    printf("Enter two numbers : ");
    scanf("%d %d",&var1,&var2);

    printf("\nBefore Swapping\n");
    printf("Variable 1 = %d\n",var1);
    printf("Variable 2 = %d\n",var2);

    temp = var1;
    var1 = var2;
    var2 = temp;

    printf("\nBefore Swapping\n");
    printf("Variable 1 = %d\n",var1);
    printf("Variable 2 = %d\n",var2);
}
