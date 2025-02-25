#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int	i;
	char *str = NULL;

	i = printf("|%02c|", 'c');
	printf("\n%d\n", i);
//	printf("%p\n", &i);
//	i = printf("%-111111111%", 42);
//	i = printf("%40000 0000       000   4440.001786i", 42);
//	printf("\n%d\n", i);
//	i = printf("|%#X|\n", 42);
//	printf("%d\n", i);
}
