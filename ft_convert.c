/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:29:36 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/11 21:22:47 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert(unsigned long n, int bValue, const char *base, int *counter)
{
	if (n < (unsigned long)bValue)
		ft_putchar(base[n], counter);
	else
	{
		ft_convert(n / bValue, bValue, base, counter);
		ft_convert(n % bValue, bValue, base, counter);
	}
}
