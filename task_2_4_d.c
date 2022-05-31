#include <stdio.h>
#include <math.h>

int main(){
  double x, y;
  printf("x = ");
  scanf("%lf", &x);
  y = 16*pow(x, 4)+8*pow(x, 3)+4*pow(x, 2)+2*x+1;

  printf("y = %g", y);
}
