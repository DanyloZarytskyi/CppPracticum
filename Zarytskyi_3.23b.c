#include <iostream>

int ReLu(int x)
{
	if (x > 0)
		return x;
	if (x < 0)
		return(0);
}

int Deriv_ReLu(int x)
{
	if (x < 0)
		return (0);
	if (x > 0)
		return (1);
}

int main()
{
	int x; int max; int deriv;
	printf("Enter x:");
	scanf_s("%d", &x);
	
	max = ReLu(x);
	deriv = Deriv_ReLu(x);
	printf("ReLu(x) = max(0,x) = %d", max);
	printf("\n");
	printf("ReLu(x)' = max(0,x)' = %d", deriv);



	return 0;

}
