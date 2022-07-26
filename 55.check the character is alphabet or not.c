#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Character : ");
    scanf("%ch",&ch);
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        printf("%c is an Alphabet\n",ch);
    else
        printf("%c is not an Alphabet\n",ch);
    return 0;
}
