#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int arr[10]; int i, min, max, av, x, y, sum = 0, N = 10;

    for (int i = 0; i < 10; i++)
    {
        cout << "[" << i + 1 << "]" << ": ";
        cin >> arr[i];
    }

    min = arr[0];
    max = arr[0];
    for (i = 0; i < N; i++)
    {
        sum += arr[i];
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    av = sum / N;
    for (i = 0; i < N; i++)
    {
        if (arr[i] > min && arr[i] < av) {
            min = arr[i];
            x = i;
        }
        if (arr[i] < max && arr[i] > av) {
            max = arr[i];
            y = i;
        }
    }

    printf("Arithmetic mean is %d\n", av);
    printf("and next values is A[%d] = %d and A[%d] = %d\n", x, min, y, max);

    return 0;
}