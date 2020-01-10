#include <stdio.h>
#include <math.h>
int main()
{
  float r1;
  float r2;
  char input[256];
  printf("Please enter the starting value: ");
  while (1)
{
fgets(input, 256, stdin);
if (sscanf(input, "%f", &r1) == 1 & r1 > 0) break;
printf("Not a valid value - try again!\n");
}
  printf("Please enter the ending value: ");
while (1)
{
fgets(input, 256, stdin);
if (sscanf(input, "%f", &r2) == 1 & r2 > r1) break;
printf("Not a valid value - try again!\n");
}

	float areaOfCircle(float r)
{
		return 3.14*r*r;
}
	int i;
  if (r1 > 0)
  {
    for (i = r1; i <= r2; i++)
    {
         printf("%f\n", areaOfCircle(i));
    }
  }
}

