#include "main.h"
/**
 * _islower - Func check if a char is lowercase
 * @c: the character
 * Return: 1 if lowercase or 0 if not
 */
int _islower(int c)
{
	if (c > 'a' && c <= 'z')

		return (1);

	else

		return (0);
}
