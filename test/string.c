#include <stdio.h>
int main(void)
{
	char a[] = "hello";

	printf("the string is %s \n",a);
	printf("a[] contains %lu characters\n", sizeof(a));
	printf("a[0] is:  %c\n", a[0]);
	printf("a[6] is:  %c\n", a[6]);
	printf(".1s:\n %.1s \n", a);
	printf(".2s:\n %.2s \n", a);
	printf(".3s:\n %.3s \n", a);
	printf(".4s:\n %.4s \n", a);
	printf(".5s:\n %.5s \n", a);
	printf("6.5s:\n %6.5s \n", a);
	printf("7.5s:\n %7.5s \n", a);
	printf("8.5s:\n %8.5s \n", a);
	printf("9.5s:\n %9.5s \n", a);
	printf("10.5s:\n %10.5s \n", a);
	printf("11.5s:\n %11.5s \n", a);
	printf("12.5s:\n %12.5s \n", a);
	return (0);
}
