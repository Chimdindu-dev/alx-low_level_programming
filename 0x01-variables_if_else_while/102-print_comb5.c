#include <stdio.h>

/**
 * main - combo of combo of numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int k;
	int l;

for (i = 48; i <= 57; ++i)
{
	for (j = 48; j <= 57; ++j)
	{
		for (k = 48; k <= 57; ++k)
		{
			for (l = 48; l <= 57; ++l)
			{
				if (((i * 10) + j) < ((k * 10) + l))
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == 57 && j == 56 && k == 57 && l == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
