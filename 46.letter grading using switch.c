#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Your Marks : ");
    scanf("%d",&marks);
    switch(marks / 10)
    {
        case 10:
        case 9:
        case 8:
            {
                printf("Your Grade : A+\n");
                break;
            }
        case 7:
            {
                printf("Your Grade : A\n");
                break;
            }
        case 6:
            {
                printf("Your Grade : B\n");
                break;
            }
        case 5:
            {
                printf("Your Grade : C\n");
                break;
            }
        case 4:
            {
                printf("You've Passed\n");
                break;
            }
        default:
            printf("Sorry You've Failed\n");
    }
    return 0;
}
