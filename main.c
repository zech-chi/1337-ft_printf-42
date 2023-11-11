#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int i = printf(" NULL %s NULL \n", NULL);
	printf("i = %d\n", i);
	int j = ft_printf(" NULL %s NULL \n", NULL);
	printf("j = %d\n", j);
	return (0);
}