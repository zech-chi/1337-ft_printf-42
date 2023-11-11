/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:03:04 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/11 22:34:47 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_apply_specifier(char sp, int *count, va_list args)
{
	if (sp == '%')
		ft_putchar('%', count);
	else if (sp == 'c')
		ft_putchar((char)va_arg(args, int), count);
	else if (sp == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (sp == 'p')
	{
		ft_putstr("0x", count);
		ft_convert(va_arg(args, unsigned long), 16, "0123456789abcdef", count);
	}
	else if (sp == 'd' || sp == 'i')
		ft_print_d_i(va_arg(args, int), count);
	else if (sp == 'u')
		ft_convert(va_arg(args, unsigned int), 10, "0123456789", count);
	else if (sp == 'x')
		ft_convert(va_arg(args, unsigned int), 16, "0123456789abcdef", count);
	else if (sp == 'X')
		ft_convert(va_arg(args, unsigned int), 16, "0123456789ABCDEF", count);
}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	int		count;
	va_list	args;

	va_start(args, str);
	count = 0;
	i = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar(str[i], &count);
		else
		{
			i++;
			if (str[i] != '\0')
				ft_apply_specifier(str[i], &count, args);
		}
		if (str[i])
			i++;
	}
	va_end(args);
	return (count);
}
