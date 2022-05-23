#include <iostream>
#include <math.h>

double sigmoid(double x)
{
    double f = (pow(1 + exp(-x), -1));
    return f;
}

double derivative(double x)
{
    double h = pow(10, -7);
    double d = (((pow(1 + exp(-x + h), -1)) - (pow(1 + exp(-x - h), -1))) / (2 * h));
    return d;
}

int main()
{
    double x; double F; double D;

    printf("Enter x:");
    scanf_s("%lf", &x);

    F = sigmoid(x);
    D = derivative(x);
    printf("f(x)=sigmoid(x)=%lf", F);
    printf("g(x)=sigmoid_derivative(x)=%lf", D);
    return 0;

}

