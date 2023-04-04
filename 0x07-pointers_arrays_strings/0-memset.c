#include "main.h"
/**
 * char *_memset - fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: the address of the pointer (*buffer) contains address of buffer
 * @b: constant byte that will replace the first n bytes of memory area pointed to by s
 * @n: the first n bytes of memory area pointed to by simple_print_buffer
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
