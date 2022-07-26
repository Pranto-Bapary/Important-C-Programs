#include<stdio.h>
int main()
{
    int num1,num2,sum,sub,mul,div;
    char ch;

    printf("Enter Two Numbers : ");
    scanf("%d %d",&num1,&num2);

    printf("Which Operation Do You Want ?\n");
    printf("+ for Addition\n");
    printf("- for Subtraction\n");
    printf("* for Multiplication\n");
    printf("/ for Division\n");

    fflush(stdin);
    printf("Enter Your Choice : ");
    scanf("%c",&ch);

    switch(ch)
    {
        case '+':
            {
            sum = num1 + num2;
            printf("Addition of %d + %d = %d\n",num1,num2,sum);
            break;
            }

        case '-':
            {
            sub = num1 - num2;
            printf("Subtraction of %d - %d = %d\n",num1,num2,sub);
            break;
            }

    case '*':
            {
            mul = num1 * num2;
            printf("Multiplication of %d * %d = %d\n",num1,num2,mul);
            break;
            }

    case '/':
            {
            div = num1 / num2;
            printf("Division of %d / %d = %d\n",num1,num2,div);
            break;
            }

    default:
        printf("Invalid Choice\n");
    }
    return 0;
}
