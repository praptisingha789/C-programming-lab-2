#include <stdio.h>

int calculateTotal(int marks[])
{
    int total = 0, i;

    for(i = 0; i < 5; i++)
    {
        total = total + marks[i];
    }

    return total;
}

float calculateAverage(int total)
{
    return total / 5.0;
}

void calculateGrade(float avg, char *grade, float *gpa)
{
    if(avg >= 80)
    {
        *grade = 'A';
        *gpa = 4.00;
    }
    else if(avg >= 70)
    {
        *grade = 'A';
        *gpa = 3.50;
    }
    else if(avg >= 60)
    {
        *grade = 'A';
        *gpa = 3.00;
    }
    else if(avg >= 50)
    {
        *grade = 'B';
        *gpa = 2.50;
    }
    else if(avg >= 40)
    {
        *grade = 'C';
        *gpa = 2.00;
    }
    else
    {
        *grade = 'F';
        *gpa = 0.00;
    }
}

void displayResult(char name[], char id[],
                   int total, float avg,
                   char grade, float gpa,
                   int fail)
{
    printf("\n------ Student Result ------\n");
    printf("Name    : %s\n", name);
    printf("ID      : %s\n", id);
    printf("Total   : %d\n", total);
    printf("Average : %.2f\n", avg);
    printf("Grade   : %c\n", grade);
    printf("GPA     : %.2f\n", gpa);

    if(fail == 1)
        printf("Result  : Fail\n");
    else
        printf("Result  : Pass\n");
}

int main()
{
    char name[50], id[20], grade;
    int marks[5], i, total, fail = 0;
    float avg, gpa;

    printf("Enter student name: ");
    scanf(" %[^\n]", name);

    printf("Enter student ID: ");
    scanf("%s", id);

    printf("Enter marks of 5 subjects:\n");

    for(i = 0; i < 5; i++)
    {
        do
        {
            printf("Subject %d: ", i + 1);
            scanf("%d", &marks[i]);

            if(marks[i] < 0 || marks[i] > 100)
            {
                printf("Invalid marks! Enter 0-100.\n");
            }

        } while(marks[i] < 0 || marks[i] > 100);

        if(marks[i] < 40)
        {
            fail = 1;
        }
    }

    total = calculateTotal(marks);

    avg = calculateAverage(total);

    calculateGrade(avg, &grade, &gpa);

    displayResult(name, id, total, avg,
                  grade, gpa, fail);

    return 0;
}
