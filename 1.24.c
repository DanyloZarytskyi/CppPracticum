#include <iostream>
#include<stdio.h>
#include <iomanip>
using namespace std;

void main()
{
	int m; int n;

	cout << "Enter m:";
	cin >> m;
	cout << "Enter n:";
	cin >> n;

	cout << setw(n+1) << m << endl;
	cout << setw(2 * n+1) << m * m << endl;
}