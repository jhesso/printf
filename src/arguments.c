/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:43:54 by jhesso            #+#    #+#             */
/*   Updated: 2022/12/08 22:25:41 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	arg_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	arg_str(char *str)
{
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	arg_int(int nbr)
{
	char	*str;

	str = ft_itoa(nbr);
	ft_putstr_fd(str, 1);
	return(ft_strlen(str));
}

int	arg_unsigned_int(unsigned int nbr)
{
	char	*str;

	str = ft_itoa_unsigned(nbr);
	ft_putstr_fd(str, 1);
	return(ft_strlen(str));
}
