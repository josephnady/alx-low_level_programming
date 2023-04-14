#include <unistd.h>
/**
 * _putchar - print char
 * @str: the char to be printed
 * Return: void
 */
void _putchar(char str)
{
	return ((write(1, @str, 1)));
}
