#include <unistd.h>
/**
 * _putchar - Entry point
 * Description: Simple C program that print given statment or char
 * @str: set of charachters
 * Return: Always 0 (Success)
 */
int _putchar(char str)
{
	return(write(1, &str, 1));
}
/*
 * int _putchar(char *str)
 * {
 *	return (write(1, &str, sizeof(str)));
 * }
 */
