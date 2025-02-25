#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int	n;
	int	p;
	char *str = NULL;

	printf("---4---\n");
	p = printf("|%-2d|", 42);
	printf("\n");
	n = printf("|%4d|", -42);

	printf("\n%d\n", p);
	printf("%d\n", n);

//	printf("%p\n", &i);
//	i = printf("%-111111111%", 42);
//	i = printf("%40000 0000       000   4440.001786i", 42);
//	printf("\n%d\n", i);
//	i = printf("|%#X|\n", 42);
//	printf("%d\n", i);
}
