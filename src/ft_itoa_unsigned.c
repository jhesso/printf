/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_itoa_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:20:48 by jhesso            #+#    #+#             */
/*   Updated: 2022/12/08 22:22:09 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	nlen(long int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*return_zero(char *str)
{
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa_unsigned(unsigned int n)
{
	char		*str;
	unsigned int	nbr;
	int			i;

	nbr = n;
	i = nlen(nbr);
	str = malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);
	str[i--] = '\0';
	if (nbr == 0)
		return (return_zero(str));
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	while (nbr > 0)
	{
		str[i] = '0' + (nbr % 10);
		nbr = nbr / 10;
		i--;
	}
	return (str);
}