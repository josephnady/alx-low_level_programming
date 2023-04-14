#include "main.h"
#include <stdio.h>

/**
 * main - the main programe
 * @argc: the number of argument passed to the main
 * @argv: the arguments passed to the main
 * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	printf("%s \n", argv[argc - 1]);
	return (0);
}
