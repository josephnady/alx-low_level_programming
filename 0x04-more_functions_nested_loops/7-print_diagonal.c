#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 * Return : void
 */
void print_diagonal(int n)
{
	int a;

	for (a = 0; a <= n; a++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('\'');
		}
		_putchar('\n');
	}
}
