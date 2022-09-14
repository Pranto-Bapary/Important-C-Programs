#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100], temp[100];
    printf("Enter First String : ");
    gets(s1);

    printf("Enter Second String : ");
    gets(s2);

    printf("\nBefore Swapping : \n");
    printf("String 1 : %s\nString 2 : %s\n", s1, s2);

    // Swapping
    strcpy(temp, s1);
    strcpy(s1, s2);
    strcpy(s2, temp);

    printf("\nAfter Swapping : \n");
    printf("String 1 : %s\nString 2 : %s\n", s1, s2);

    return 0;
}