#include <iostream>
using namespace std;

int main()
{
    int v0 = 1, v1 = 1, v2 = 1, vi, i;

    std::cout << "Enter i(3 or more):";
    std::cin >> i;

    for (int j = 3; j <= i; j++)
    {
        vi = (j + 4) * (v2 - 1) + (j + 5) * (v0);
        v2 = vi;
        v0 = v1;
        std::cout << "v" << j << "=" << vi;
        std::cout << "\n";
    }
}
