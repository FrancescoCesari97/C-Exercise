#include <stdio.h>
#include <string.h>

struct Student
{
    char name[12];
    float gpa;
};

int main()
{

    struct Student student1 = {"freedus", 3.0};

    struct Student student2 = {"drew", 5.0};

    struct Student student3 = {"baki", 8.0};

    struct Student students[] = {student1, student2, student3};

    for (int i = 0; i < sizeof(students) / sizeof(students)[0]; i++)
    {

        printf("%-10s\t", students[i].name);
        printf("%.2f\n", students[i].gpa);
    }

    return 0;
}