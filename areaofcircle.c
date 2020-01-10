#include <stdio.h>
#include <math.h>
int main()
{
	float areaOfCircle(float r)
{
		return 3.14*r*r;
}
	int i;
	for (i=3.5; i<=12.5; i++)
   {
       printf("%f\n", areaOfCircle(i));
   }
}
