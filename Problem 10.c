#include <stdio.h>

union Data
{
    int i;
    float f;
    char c;
};

int main()
{
    union Data data;

    printf("Size of union Data = %zu bytes\n",
           sizeof(data));

    data.i = 65;
    printf("\nAssigned integer : i = %d\n", data.i);

    data.f = 3.5;
    printf("Assigned float   : f = %f\n", data.f);

    data.c = 'A';
    printf("Assigned char    : c = %c\n", data.c);

    return 0;
}
