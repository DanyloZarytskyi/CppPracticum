#include <iostream>
#include <math.h>


int main()
{
	float x; float sum=0; int n;
	
	printf("Enter x(-1<x<1):");
	scanf_s("%f", &x);

	for (n = 0; n <= 10; n++)
	{
		if (fabs((pow(-1, n) * pow(x, n)) / n) > 0)
			sum += (pow(-1, n) * pow(x, n)) / n;
	}
	printf("Sum=%f", sum);
	return 0;

}
