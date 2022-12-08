/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:11:58 by jhesso            #+#    #+#             */
/*   Updated: 2022/12/08 22:25:11 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/includes/libft.h"

int	ft_printf(const char *, ...);
int	calculate_num_of_args(const char *str);
int	arg_char(char c);
int	arg_str(char *str);
int	arg_int(int nbr);
int	arg_unsigned_int(unsigned int nbr);
char	*ft_itoa_unsigned(unsigned int n);

#endif
