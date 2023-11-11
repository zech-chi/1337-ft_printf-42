/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d_i.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:04:36 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/11 20:10:12 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_d_i(int n, int *counter)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", counter);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', counter);
		n *= -1;
	}
	if (n < 10)
	{
		ft_putchar('0' + n, counter);
	}
	else
	{
		ft_print_d_i(n / 10, counter);
		ft_print_d_i(n % 10, counter);
	}
}
