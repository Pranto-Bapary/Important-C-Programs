#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Marks : ");
    scanf("%d",&marks);
    if(marks >= 80 && marks <= 100)
        printf("Your Grade : A+\n");
    else if(marks >= 70 && marks < 80)
        printf("Your Grade : A\n");
    else if(marks >= 60 && marks < 70)
        printf("Your Grade : B\n");
    else if(marks >= 50 && marks < 60)
        printf("Your Grade : C\n");
    else if(marks >= 40 && marks < 50)
        printf("Your Grade : D\n");
    else
        printf("Your Grade : F\n");
    return 0;
}
