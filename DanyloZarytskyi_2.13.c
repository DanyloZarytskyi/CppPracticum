
#include <iostream>
#include <math.h>

int main()
{
    double r; double R; double pi;
    pi = 3.14; double V;

    printf("Enter r:");
    scanf_s("%lf", &r);

    printf("Enter R:");
    scanf_s("%lf", &R);

    V = (2 * pow(pi, 2) * pow(r, 2) * R);
    printf("V = %lf", V);

    return 0;
}

