/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:03:04 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/10 21:25:57 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// va_arg(args, type ) type = int or char or char * ...

int	ft_printf(const char * str, ...)
{
	size_t	i;
	va_list	args;
	va_start(args, str);

	i = 0;
	while (str[i])
	{
		if (str[i] != '%')
			ft_putchar(str[i]);
		else
		{
			i++;
			if (str[i] == 'd')
				printf("%d", va_arg(args, int));
			else if (str[i] == 'f')
				printf("%f", va_arg(args, double));
			else if (str[i] == 's')
				printf("%s", va_arg(args, char *));
			else if (str[i] == 'c')
				printf("%c", va_arg(args, int));			
		}
		i++;
	}
	va_end(args);
	return (0);
}

int main()
{
	ft_printf("hello %s from %d , %c, %f \n", "world", 1337, 'z', 6.888);
	return (0);
}