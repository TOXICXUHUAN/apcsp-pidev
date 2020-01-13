#include <stdio.h>
	float arrayAdd(float* arr, int s, int n)
	{
		for (int i = 0; i <= s; i++)
		{
			arr[i] = arr[i] + n;
			printf("%f\n", arr[i]);
		}
    return 0;
  }
int main()
{
	float arr[100];
	for (int i = 0; i <= 100; i++)
	{
		arr[i] = i * i;
	}

arrayAdd(arr, 100, 5);
}
