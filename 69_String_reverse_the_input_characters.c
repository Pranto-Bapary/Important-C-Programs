#include <stdio.h>
int main()
{
    char name[100], i = 0;
    printf("Enter your name : ");
    gets(name);
    while (name[i] != '\0')
    {
        if((int)name[i] >= 97)
            printf("%c",name[i] - 32);
        else if((int)name[i] >= 65)
            printf("%c",name[i] + 32);
        else
            printf("%c",name[i]);
        i++;
    }

    return 0;
}