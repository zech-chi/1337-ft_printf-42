/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:33:45 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/11 20:05:43 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *str, int *counter)
{
	size_t	i;

	if (!str)
	{
		ft_putstr("(null)", counter);
		return ;
	}
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], counter);
		i++;
	}
}
