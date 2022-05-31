#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    const int K = 100; int N; int arr[K]; int i; int j; int ct;
    std::cout << "Enter N:\n";
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        cout << "[" << i + 1 << "]" << ": ";
        cin >> arr[i];
    }

    int sum = 0;
    for (int j = 0; j < N; j++)
    {
        if (int(pow(arr[j], (1.0 / 3.0))) % 2 == 0)
        {
            sum+=1;
        }
    }

    std::cout << "Number of full cubes:" << sum;

}