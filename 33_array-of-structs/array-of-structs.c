#include <stdio.h>
#include <string.h>

struct Student
{
    char name[12];
    float gpa;
};

int main()
{
    struct Student student1 = {"Adonalsium", 4.0};
    struct Student student2 = {"Hoid", 3.5};
    struct Student student3 = {"Sazed", 4.5};
    struct Student student4 = {"Moash", 2.5};

    struct Student students[] = {student1, student2, student3, student4};

    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        printf("\nName:\t%s\n", students[i].name);
        printf("GPA:\t%.1f\n", students[i].gpa);
    }

    return 0;
}