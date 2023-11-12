/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address_hex.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:46:32 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/12 14:59:38 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_address_hex(unsigned long long llu, int *counter)
{
	if (llu < 16)
		ft_putchar("0123456789abcdef"[llu], counter);
	else
	{
		ft_print_address_hex(llu / 16, counter);
		ft_print_address_hex(llu % 16, counter);
	}
}
