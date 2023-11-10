/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:26:41 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/10 23:03:00 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

void	ft_convert(int n, int baseValue, const char *base)
{
	long long	ln;

	ln = n;
	if (ln < 0)
	{
		ft_putchar('-');
		ln *= -1;
	}
	if (ln < baseValue)
	{
		ft_putchar(base[ln]);
	}
	else
	{
		ft_convert(ln / baseValue, baseValue, base);
		ft_convert(ln % baseValue, baseValue, base);
	}
}

int main(int ac , char **av)
{
	if (ac != 2)
		return (0);
	int n = atoi(av[1]);
	
	printf("---base=10----");
	ft_convert(n, 10, "0123456789");
	printf("\n");
	printf("%d", n);
	printf("\n");
	printf("---base=16l----");
	ft_convert(n, 16, "0123456789abcdef");
	printf("\n");
	printf("%x", n);
	printf("\n");
	printf("---base=16l----");
	ft_convert(n, 16, "0123456789ABCDEF");
	printf("\n");
	printf("%X", n);
	printf("\n");
	return (0);
}