#include <stdio.h>

int main(){
	int a;
	printf("Input a real number(less than 100): ");
	scanf("%d", &a);
	printf(" - | - |%d| - | - \n", a);
	printf(" - |%d|%d|%d| - \n",a,a,a);
	printf(" %d|%d|%d|%d|%d\n",a,a,a,a,a);
	
}
