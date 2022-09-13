#include <stdio.h>

/**
 * main - natural numbers
 * Return: sum of numberrs
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = i + sum;
		}
	}
	printf("%d\n", sum);
	return (0);
}
