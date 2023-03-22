#include "main.h"
/**
 * _isalpha - Checks if the charachter is alpha or not
 * @c: charater to be tested
 * Return: 1 if Alpha 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'A' || c >= 'a') && (c <= 'Z' || c <= 'z'))
		return (1);

	else
		return (0);
}
