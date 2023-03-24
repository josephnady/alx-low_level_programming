#include "main.h"
/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c : char to be tested
 * Return: 1 if c is a digit 0 if else
 */
int _isdigit(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (0);
	else
		return (1);
}
