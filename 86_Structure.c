#include <stdio.h>
struct studentInfo
{
    char name[20];
    int id;
    float marks;
};
int main()
{
    struct studentInfo student[100], temp;
    int num, i, j;

    printf("Enter the number of students data you want to work with : ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("\nEnter %dth Student's Data\n", i + 1);

        fflush(stdin);
        printf("Enter Name : ");
        gets(student[i].name);

        printf("Enter ID : ");
        scanf("%d", &student[i].id);

        printf("Enter Marks : ");
        scanf("%f", &student[i].marks);
    }

    // sorting by descending order
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num - 1; j++)
        {
            if (student[j].marks < student[j + 1].marks)
            {
                temp = student[j];
                student[j] = student[j + 1];
                student[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < num; i++)
    {
        printf("\nPrinting %dth Student's Data\n", i + 1);
        printf("Name : %s\n", student[i].name);
        printf("ID : %d\n", student[i].id);
        printf("Marks : %.2f\n", student[i].marks);
    }

    return 0;
}