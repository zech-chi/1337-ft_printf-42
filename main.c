#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int p = printf("%p\n", (void *)-14523);
	int f = ft_printf("%p\n", (void *)-14523);

	printf("p = %d, f = %d\n", p, f);
	return (0);
}