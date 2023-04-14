#include <unistd.h>

/**
 * _putchar - function that print char
 * @str: the char to be printed
 * Return: void
 */
int _putchar(char str)
{
	return ((write(1, &str, 1)));
}
