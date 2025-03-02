#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

int	ft_nbrlen(int n)
{
	int	res;

	res = 0;
	while (n)
	{
		n /= 16;
		res++;
	}
	return (res);
}

char	*ft_xtoa(unsigned int n)
{
	char	*res;
	char	*base = "0123456789abcdef";
	int		size;

	if (n == 0)
		return (strdup("0"));
	size = ft_nbrlen(n);
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	res[size] = '\0';
	while (n)
	{
		res[--size] = base[n % 10];
		n /= 10;
	}
	return (res);
}

int	main()
{
	char *str = ft_xtoa(4231);
	printf("%s\t%x\n", str, 4231);
}
