#include <stdio.h>

int main()
{
    float a, b, division;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    division = a / b;

    printf("Division = %.2f", division);

    return 0;
}
