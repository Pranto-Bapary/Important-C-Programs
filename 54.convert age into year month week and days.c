#include<stdio.h>
int main()
{
    int days,year,month,week;
    printf("Enter Age in Days : ");
    scanf("%d",&days);

    year = days / 365;
    printf("%d Year",year);

    days = days - (year * 365);

    month = days / 30;
    printf(", %d Months",month);

    days = days - (month * 30);

    week = days / 7;
    printf(", %d Weeks",week);

    days = days - (week * 7);
    printf(", %d Days",days);
    return 0;

}
