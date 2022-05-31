#include <stdio.h>
#include <math.h>

int main(){
  double x, y, Rosenbrock2d;
  printf("x = ");
  scanf("%lf", &x);
  printf("y = ");
  scanf("%lf", &y);
  Rosenbrock2d = 100*pow(pow(x, 2)-y, 2)+pow(x-1, 2);

  printf("Rosenbrock2d(x,y) = %g", Rosenbrock2d);
}
