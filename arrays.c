#include <stdio.h>
int arrayAdd(int* arr, int s, int n)
	{
		for (int i = 0; i <= s; i++)
		{
			arr[i] = arr[i] + n;
			printf("%d\n", arr[i]);
		}
    return 0;
	}
int main()
{
	int arr[100];
	for (int i = 0; i <= 100; i++)
	{
		arr[i] = i * i;
}
arrayAdd(arr, 100, 5);
}
