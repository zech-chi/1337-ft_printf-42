/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:06:04 by zech-chi          #+#    #+#             */
/*   Updated: 2023/11/12 22:21:42 by zech-chi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *count);
void	ft_putstr(const char *str, int *count);
void	ft_convert(unsigned int u, unsigned int bv, const char *base, int *c);
void	ft_print_address_hex(unsigned long long llu, int *counter);
void	ft_print_d_i(int n, int *count);
#endif
