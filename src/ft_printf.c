/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:10:30 by jhesso            #+#    #+#             */
/*   Updated: 2022/12/15 20:17:38 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../include/test.h"

// ! need to add error handling, for example if a malloc fails, what to do?

static int	printf_arguments(va_list args, char arg)
{
	int	amount_of_chars;

	amount_of_chars = 0;
	if (arg == 'c')
		amount_of_chars += ft_putchar_fd(va_arg(args, int), 1);
	else if (arg == 's')
		amount_of_chars += arg_str(va_arg(args, char *));
	else if (arg == 'i' || arg == 'd')
		amount_of_chars += arg_int(va_arg(args, int));
	else if (arg == 'u')
		amount_of_chars += arg_unsigned_int(va_arg(args, unsigned int));
	else if (arg == '%')
		amount_of_chars += ft_putchar_fd('%', 1);
	else if (arg == 'X' || arg == 'x')
		amount_of_chars += arg_hex(va_arg(args, unsigned int), arg);
	else if (arg == 'p')
	{
		amount_of_chars += ft_putstr_fd("0x", 1);
		arg = 'x';
		amount_of_chars += arg_hex(va_arg(args, unsigned long long), arg);
	}
	return (amount_of_chars);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		amount_of_chars;
	int		i;

	va_start(args, str);
	i = 0;
	amount_of_chars = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '\0' && str[i] != '%')
		{
			ft_putchar_fd(str[i], 1);
			amount_of_chars++;
			i++;
		}
		if (str[i] == '%')
		{
			i++;
			amount_of_chars += printf_arguments(args, str[i]);
			i++;
		}
	}
	va_end(args);
	return (amount_of_chars);
}
