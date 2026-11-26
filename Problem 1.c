#include <stdio.h>
 
double calculateBill(int units)
{
    if (units <= 100)
        return units * 5.0;
    else if (units <= 200)
        return 100 * 5.0 + (units - 100) * 6.0;
    else
        return 100 * 5.0 + 100 * 6.0 + (units - 200) * 8.0;
}
 
double calculateVAT(double charge)
{
    return charge * 0.05;
}
 
void displayBill(int id, const char name[], int units,
                 double charge, double vat)
{
    printf("\n------ Electricity Bill ------\n");
    printf("Customer ID       : %d\n", id);
    printf("Customer Name     : %s\n", name);
    printf("Units Consumed    : %d\n", units);
    printf("Electricity Charge: Tk %.2f\n", charge);
    printf("VAT (5%%)          : Tk %.2f\n", vat);
    printf("Final Bill        : Tk %.2f\n", charge + vat);
}
 
int main(void)
{
    int id, units;
    char name[60];
    double charge, vat;
 
    printf("Enter customer ID: ");
    scanf("%d", &id);
    printf("Enter customer name: ");
    scanf(" %59[^\n]", name);
    printf("Enter units consumed: ");
    scanf("%d", &units);
 
    if (units < 0) {
        printf("Invalid input: units cannot be negative.\n");
        return 1;
    }
 
    charge = calculateBill(units);
    vat = calculateVAT(charge);
    displayBill(id, name, units, charge, vat);
    return 0;
}
