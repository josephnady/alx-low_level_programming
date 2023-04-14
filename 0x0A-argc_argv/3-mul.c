#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int res, x, y;

	if( argc > 3)
		printf("%s\n","Error, Add two arg only");
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	res = x * y;
	printf("%d\n", res);
	return (res);
}
