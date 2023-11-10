/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:29:36 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/10 23:04:30 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert(int n, int baseValue, const char *base)
{
	long long	ln;

	ln = n;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	else if (n < baseValue)
	{
		ft_putchar(base[n]);
	}
	else
	{
		ft_convert(n / baseValue, baseValue, base);
		ft_convert(n % baseValue, baseValue, base);
	}
}