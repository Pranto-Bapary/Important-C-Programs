#include<stdio.h>
int main()
{
    int length,width,area;
    printf("Enter Length and Width : ");
    scanf("%d %d",&length,&width);
    area = length * width;
    printf("Area of Rectangle : %d\n",area);
    return 0;
}
