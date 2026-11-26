#include <stdio.h>

struct Employee
{
    int id;
    char name[30];
    float basic, house, medical, gross;
};

int main()
{
    struct Employee e[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &e[i].id);

        printf("Enter name: ");
        scanf("%s", e[i].name);

        printf("Enter basic salary: ");
        scanf("%f", &e[i].basic);

        printf("Enter house rent: ");
        scanf("%f", &e[i].house);

        printf("Enter medical allowance: ");
        scanf("%f", &e[i].medical);

        e[i].gross = e[i].basic +
                     e[i].house +
                     e[i].medical;
    }

    printf("\nID   Name   Basic   House   Medical   Gross\n");

    for(i = 0; i < n; i++)
    {
        printf("%d   %s   %.2f   %.2f   %.2f   %.2f\n",
        e[i].id,
        e[i].name,
        e[i].basic,
        e[i].house,
        e[i].medical,
        e[i].gross);
    }

    return 0;
}
