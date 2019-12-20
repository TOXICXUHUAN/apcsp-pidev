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
  float d;
  double e;
  char f;
  unsigned int g;
  long int h;
  int div = 3;
  printf("a, b and c are now: %d, %d, %d\n", a, b ,c);
  printf("Int value: %d and size: %d bytes\n", a, sizeof(a));
  printf("Float value: %d and size: %d bytes\n", d, sizeof(d));
  printf("Double value: %d and size: %d bytes\n", e, sizeof(e));
  printf("Char value: %d and size: %d bytes\n", f, sizeof(f));
  printf("Unsigned int value: %d and size: %d bytes\n", g, sizeof(g));
  printf("Long int value: %d and size: %d bytes\n", h, sizeof(h));
  if (a == 5)
	{
	printf("a is equal to 5\n");
	}
  for (int i=1; i<=100; i++)
  	{
	if ((i % div) == 0)
        {
        printf("%d\n", i);
  	}
}
}
