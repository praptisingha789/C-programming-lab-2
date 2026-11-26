#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    char department[20];
    float cgpa;
};

int main()
{
    struct Student s;

    printf("Enter student ID: ");
    scanf("%d", &s.id);

    printf("Enter name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter department: ");
    scanf("%s", s.department);

    printf("Enter CGPA: ");
    scanf("%f", &s.cgpa);

    printf("\n------ Student Information ------\n");

    printf("Student ID : %d\n", s.id);
    printf("Name       : %s\n", s.name);
    printf("Department : %s\n", s.department);
    printf("CGPA       : %.2f\n", s.cgpa);

    return 0;
}
