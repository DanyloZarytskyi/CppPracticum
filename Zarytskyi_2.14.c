/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a;
	int t;
	float S;
	int V;

	printf("Enter a:");
	scanf("%d", &a);

	printf("Enter t:");
	scanf("%d", &t);

	S = (float)((a*t*t)/2);
	printf("S = %f", S);
	V = (float)(a*t);
	printf(", ");
	printf("V = %d", V);
	return 0;
}