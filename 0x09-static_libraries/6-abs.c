#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 * @n: the char to be tested.
 * Return: result which is the absolute number.
 */
int  _abs(int n)
{
	if (n < 0)
	{
		int result = n * -1;

		return (result);
	}
	return (n);
}

