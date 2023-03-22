#include "main.h"
/**
 * print_alphabet_x10 - Func print alphabet 10x
 *
 * Return: String
 */
void print_alphabet_x10(void)
{
	int co = 0;

	while (co < 10)
	{
		int ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar (ch);
		}
		co++;
		_putchar ('\n');
	}
}
