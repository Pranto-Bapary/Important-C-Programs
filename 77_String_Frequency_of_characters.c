#include <stdio.h>
int main()
{
    char string[100];
    int alphabet[26] = {0};
    int i, index;
    i = index = 0;

    printf("Enter an String : ");
    gets(string);

    while (string[i] != '\0')
    {
        if (string[i] >= 'a' && string[i] <= 'z')
            index = string[i] - 97;
        alphabet[index]++;
        i++;
    }

    for (i = 0; i < 26; i++)
        printf("%c occured %d times\n", i + 97, alphabet[i]);
    return 0;
}