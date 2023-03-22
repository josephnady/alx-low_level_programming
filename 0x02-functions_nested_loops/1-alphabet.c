#include <unistd.h>
#include <stdio.h>
/**
 * print_alphabet - function that print alphabet
 *
 * Return: result which is string
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');}
