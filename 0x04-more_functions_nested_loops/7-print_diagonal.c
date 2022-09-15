#include "main.h"

/**
 * print_diagonal - diagonal line
 * @n: int parameter
 * Return: void
 */

void print_diagonal(int n)
{
	int a = 0;
	int b = 0;
	
	if (n > 0)
	{
		while (a < n)
		{
			while (b < a)
			{
				_putchar(' ');
				b++;
			} 
			_putchar('\');
			_putchar('\n');
			a++;
			b = 0;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
