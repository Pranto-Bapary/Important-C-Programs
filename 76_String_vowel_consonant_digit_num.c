#include <stdio.h>
int main()
{
    char string[100];
    int i, vowel, conso, digit, word, line, specChar;
    i = vowel = conso = digit = word = line = specChar = 0;

    printf("Enter any String : ");
    gets(string);

    while (string[i] != '\0')
    {
        if (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U' || string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
            vowel++;

        else if (string[i] >= 'A' && string[i] <= 'Z' || string[i] >= 'a' && string[i] <= 'z')
            conso++;

        else if (string[i] >= '0' && string[i] <= '9')
            digit++;

        else if (string[i] == ' ')
            word++;

        else if (string[i] == '\n')
            line++;

        else
            specChar++;
        i++;
    }

    printf("Total Vowel : %d\n", vowel);
    printf("Total Consonant : %d\n", conso);
    printf("Total Digits : %d\n", digit);
    printf("Total Words : %d\n", word + 1);
    printf("Total Lines : %d\n", line + 1);
    printf("Special Characters : %d\n", specChar);
    return 0;
}