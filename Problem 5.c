#include <stdio.h>

long long factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n;
    long long result;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("Negative number is not allowed.\n");
    }
    else if(n > 20)
    {
        printf("Number is too large.\n");
    }
    else
    {
        result = factorial(n);

        printf("Factorial of %d = %lld\n", n, result);
    }

    return 0;
