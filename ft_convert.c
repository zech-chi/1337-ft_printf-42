/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:29:36 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/12 14:59:03 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert(unsigned int u, unsigned int bv, const char *base, int *c)
{
	if (u < bv)
		ft_putchar(base[u], c);
	else
	{
		ft_convert(u / bv, bv, base, c);
		ft_convert(u % bv, bv, base, c);
	}
}
