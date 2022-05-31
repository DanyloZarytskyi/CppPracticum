// 3.4

#include <stdio.h>
#include <inttypes.h> 

uint16_t D(uint8_t a,uint8_t b)
{
    return(uint16_t)a * b;
}

int main() 
{
    uint8_t a, b;
    
    scanf("%hhu", &a); 
    scanf("%hhu", &b);
    printf("%hu", D(a,b)); 
}
