// 3.3

#include <stdio.h>
#include <inttypes.h>

int main() 
{
    int32_t a, b, c;
    printf("a, b, c = ");
    scanf("%d, %d, %d", &a, &b, &c);
    
    int32_t d = a * b * c; 
    printf("m1 = %d\n", d);

    int64_t d1 = (int64_t)a * b * c;
    printf("m2 = %" PRId64"\n", d1);
}
