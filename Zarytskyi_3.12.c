#include <iostream>


int main()
{
	int a; int b; int c;

	printf("Enter the biggest side(c):");
	scanf_s("%d", &c);

	printf("Enter a:");
	scanf_s("%d", &a);

	printf("Enter b:");
	scanf_s("%d", &b);

	if (c < a+b)
		if(c>a-b)
			if((c*c)==(a*a)+(b*b))
				printf("Triangle is right");
	if (c < a + b)
		if (c > a - b)
			if ((c * c) > (a * a) + (b * b))
				printf("Triangle is obtuse");
	if (c < a + b)
		if (c > a - b)
			if ((c * c) < (a * a) + (b * b))
				printf("Triangle is acute");
	
	if (c > a + b)
		printf("Triangle is not valid");
	if (c < a - b)
		printf("Triangle is not valid");

	return 0;

}
