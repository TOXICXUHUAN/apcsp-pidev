#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;
  int tmp = 0;
  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);
  tmp = c;
  c = a;
  a = tmp;
  printf("a, b and c are now: %d, %d, %d\n", a, b ,c);
}
