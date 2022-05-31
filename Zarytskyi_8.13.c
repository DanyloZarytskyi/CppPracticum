#include <iostream>
using namespace std;

int main()
{
    int n, m, k, i, j, g;
    double** a, ** b, ** c;

    cout << "Enter n:";
    cin >> n;
    cout << "Enter m:";
    cin >> m;
    cout << "Enter k:";
    cin >> k;

    a = new double* [n];
    cout << "Enter elements of A:" << endl;
    for (int i = 0; i < n; i++)
    {
        a[i] = new double[m];
        for (int j = 0; j < m; j++)
        {
            cout << "a[" << i << "][" << j << "]=";
            cin >> a[i][j];
        }
    }

    b = new double* [m];
    cout << "Enter elements of B" << endl;
    for (int i = 0; i < m; i++)
    {
        b[i] = new double[k];
        for (int j = 0; j < k; j++)
        {
            cout << "b[" << i << "][" << j << "]=";
            cin >> b[i][j];
        }
    }

    c = new double* [n];
    for (int i = 0; i < n; i++)
    {
        c[i] = new double[k];
        for (int j = 0; j < k; j++)
        {
            c[i][j] = 0;
            for (int g = 0; g < m; g++)
                c[i][j] += a[i][g] * b[g][j];
        }
    }

    cout << "C:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}
