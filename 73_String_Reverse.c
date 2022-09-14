#include <stdio.h>
#include <string.h>
int main()
{
    char string[100], reverse[100], i, j, len;
    i = j = len = 0;
    printf("Enter a String : ");
    gets(string);

    while (string[i] != '\0')
    {
        len++;
        i++;
    }

    for (i = len - 1; i >= 0; i--)
    {
        reverse[j] = string[i];
        j++;
    }
    reverse[j] = '\0';
    printf("Reverse String : %s\n", reverse);

    return 0;
}