#include<stdio.h>
int main()
{
    float fah,cel;
    printf("Enter fahrenheit temperature : ");
    scanf("%fah",&fah);
    cel = (fah - 32) * 5 / 9;
    printf("Temperature in Celcius : %.2f\n",cel);
    printf("Enter celcius temperature : ");
    scanf("%f",&cel);
    cel = (9 * cel / 5) + 32;
    printf("Temperature in Fahrenheit : %.2f\n",fah);
    return 0;
}
