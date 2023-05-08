#include <stdlib.h>
#include <stdio.h>

/**
 * main - print numbers from 1 to 100
 * Return: Always (0) Success
 */
int main(void)
{
	for (int a = 1; a <= 100; a++)
	{
		if (((a % 3 == 0) && (a % 5 == 0)))
			printf("FizzBuzz ");
		else if ((a % 5) == 0)
			printf("Buzz ");
		else if ((a % 3) == 0)
			printf("Fizz ");
		else
		{
			if (a < 10)
			{
				putchar(a + '0');
				putchar(' ');
			}
			else if (a < 100)
			{
				putchar((a / 10) + '0');
				putchar((a % 10) + '0');
				putchar(' ');
			}
			else
			{
				printf("%d", a);
			}
		}
	putchar('\n');
	return (0);
}
