#include <iostream>
#include <math.h>

int main()
{
    double x, y;
    printf("Value of X: ");
    scanf_s("%lf", &x);
    y = (pow(x, 4) + pow(x, 3) + pow(x, 2) + x + 1);
    printf("y = %lf ", y);
}
