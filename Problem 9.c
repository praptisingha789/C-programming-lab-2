#include <stdio.h>

struct Patient
{
    int id;
    char name[30];
    int age;
    char disease[30];
    float fee;
};

int main()
{
    struct Patient p[100];
    int n, i;
    float total = 0;

    printf("Enter number of patients: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nPatient %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &p[i].id);

        printf("Enter name: ");
        scanf("%s", p[i].name);

        printf("Enter age: ");
        scanf("%d", &p[i].age);

        printf("Enter disease: ");
        scanf("%s", p[i].disease);

        printf("Enter consultation fee: ");
        scanf("%f", &p[i].fee);

        total = total + p[i].fee;
    }

    printf("\nID   Name   Age   Disease   Fee\n");

    for(i = 0; i < n; i++)
    {
        printf("%d   %s   %d   %s   %.2f\n",
        p[i].id,
        p[i].name,
        p[i].age,
        p[i].disease,
        p[i].fee);
    }

    printf("\nTotal consultation fees collected = Tk %.2f\n", total);

    return 0;
}
