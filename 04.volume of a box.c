#include<stdio.h>
int main()
{
    int height,width,length,volume;
    printf("Enter Height Width and Length of the Box : ");
    scanf("%d %d %d",&height,&width,&length);
    volume = height * width * length;
    printf("Volume of the box : %d\n",volume);
    return 0;
}
