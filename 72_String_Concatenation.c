#include <stdio.h>
int main()
{
    char string1[100], string2[100], i, j, len;
    i = j = len = 0;

    printf("Enter First String : ");
    gets(string1);

    printf("Enter Second String : ");
    gets(string2);

    while (string1[i] != '\0')
    {
        len++;
        i++;
    }

    while (string2[j] != '\0')
    {
        string1[len + j] = string2[j];
        j++;
    }
    printf("Concatenated String : %s\n", string1);
    return 0;
}