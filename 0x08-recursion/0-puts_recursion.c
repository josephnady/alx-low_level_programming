#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string
 * Return: recusive function
 */
void _puts_recursion(char *s)
{
	printf("%c",*s);

	if (*s)
	{
		_puts_recursion(s + 1);
	}
}
