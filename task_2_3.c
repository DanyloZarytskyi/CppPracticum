#include <stdio.h>
#include <math.h>

double area(double a, double b, double c){
  double p = (a+b+c)/2;
  return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main(){
  double a,b,c;
  printf("a,b,c:\n");
  scanf("%f %f %f",&a, &b, &c);

  double square = area(a,b,c);
  printf("square of triangle is %lf", square);
}
