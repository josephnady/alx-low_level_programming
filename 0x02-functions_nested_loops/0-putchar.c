#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
		_Putchar(*str);
		str++;
	}
	_Putchar('\n');
	return (0);
}
