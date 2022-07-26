#include<stdio.h>
int main()
{
    int dec,rem,oct = 0,i = 1;
    printf("Enter a Decimal Value : ");
    scanf("%d",&dec);
    while(dec != 0)
    {
        rem = dec % 8;
        oct = oct + rem * i;
        dec = dec / 8;
        i = i * 10;
    }
    printf("Octal Value : %d\n",oct);
    return 0;
}
