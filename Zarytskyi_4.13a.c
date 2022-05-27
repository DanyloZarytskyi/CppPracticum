
#include <iostream>
#include <math.h>

int main()
{
	int n; int x;
	int sum = 0;

	printf("Enter x:");
	scanf_s("%d", &x);

	printf("Enter n:");
	scanf_s("%d", &n);


	for (int i = 0; i <= n; i++)
	{
		sum = sum + pow((x - 1), i);
	}
	
	printf("Result: %d", sum);

	return 0;
}
