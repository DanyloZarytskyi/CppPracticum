#include <stdio.h>

int main()
{
    int n;
    float x, y, k;
    printf("x, n:");
    scanf("%f, %d", &x, &n);
    
    k = 1;
    y = 1;
    for(int i=0;i<n;i++)
    {
        k *= x;
        y += k;
    }
    printf("y = %f", y);
}