/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:10:30 by jhesso            #+#    #+#             */
/*   Updated: 2022/12/08 22:26:25 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/test.h"

static int	printf_arguments(va_list args, char arg)
{
	int	amount_of_chars;

	amount_of_chars = 0;
	// printf("comparing argument: %c\n", arg);
	if (arg == 'c')
		amount_of_chars += arg_char(va_arg(args, int));
	else if (arg == 's')
		amount_of_chars += arg_str(va_arg(args, char *));
	else if (arg == 'i')
		amount_of_chars += arg_int(va_arg(args, int));
	else if (arg == 'd') // !m not convinced that this is correct
		amount_of_chars += arg_int(va_arg(args, int));
	else if (arg == 'u')
		amount_of_chars += arg_unsigned_int(va_arg(args, unsigned int));
	else if (arg == '%')
		amount_of_chars = arg_char('%');
	return (amount_of_chars);
}

// ! is it ok to name the str myself?
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
