#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n, i, j,c;
	int a[22] = { 0 };
	int b[100000] = { 0 };


	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < n; i++)
	{
		for (j = 2,c = a[i]; j < a[i]; j++)
		{
			
			while (c % j == 0)
			{
				b[j]++;
				c = c / j;
			}
		}

	}

	for (i = 0; i < 100000; i++)
	{
		if (b[i] > 0)
			printf("%d ", i);
	}
	return 0;
}
