#include <stdio.h>
#include <string.h>
int main()
{
    char string[100], reverse[100];
    int i, j, len, compare;
    i = j = len = 0;

    printf("Input an String : ");
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
    compare = strcmp(string, reverse);

    if (compare == 0)
        printf("%s is a Palindrome String\n", string);
    else
        printf("%s is not Palindrome String\n", string);
    return 0;
}