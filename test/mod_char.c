#include <stdio.h>
int main(void)
{
	char n;
	char *p;
	
	n = 'a';
	p = &n;
	printf("%c \n", n);
	printf("%p \n", p);
	printf("%p \n", &n);
	*p = 'b';
	printf("%c \n", n);
	return (0);
}
