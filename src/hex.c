/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 23:38:45 by jhesso            #+#    #+#             */
/*   Updated: 2022/12/13 02:32:33 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/*
*	To convert a decimal number to hexadecimal:
*	Number % 16 == hexadecimal number
*	Number / 16 == new value of number
*	do this while Number / 16 != 0
*	the hex number == each digit from the reminders in reverse order (the last == the first)
?	digits 0-9 == digits
?	numbers 10-15 == characters A-F
?	for example:
?	1 == 1
?	10 == A
?	16 == F
?	42 == 2A || 0x2A ( 42 % 16 == 10 == A, 42 / 16 == 2, 2 % 16 == 2, 2 / 16 == 0)
*/

int	arg_hex_lower(int nbr)
{
	return (nbr);
}

int	arg_hex_upper(int nbr)
{
	return (nbr);
}
