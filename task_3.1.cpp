// 3.1

#include <stdio.h>

void A(int n) 
{
  int a = n / 100;
  int b = (n / 10) % 10;
  int c = n % 10;
  
  printf("%d, %d, %d\n", a, b, c);
}

void B(int n) 
{
  int a = n / 100;
  int b = (n / 10) % 10;
  int c = n % 10;
  int d = a + b + c;
  
  printf("%d\n", d);
}

void C(int n)
{
  int a = n / 100;
  int b = (n / 10) % 10;
  int c = n % 10;
  int d = c * 100 + b * 10 + a;
  
  printf("%d\n", d);
}

int main()
{
  int n;
  
  printf("n = ");
  scanf("%d", &n);
  
  if (n > 99 && n < 1000)
  {
    A(n);
    B(n);
    C(n);
  }
  else
  {
    printf("%d Задане число не тризначне\n", n);
  }
}
    
    