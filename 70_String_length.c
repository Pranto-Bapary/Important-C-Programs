#include <stdio.h>
int main()
{
    char str[100], i, len;
    i = len = 0;
    printf("Enter any String : ");
    gets(str);
    while (str[i] != '\0')
    {
        len++;
        i++;
    }
    printf("Length of the String is %d\n", len);
    return 0;
}