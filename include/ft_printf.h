/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:11:58 by jhesso            #+#    #+#             */
/*   Updated: 2022/12/12 23:43:41 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/includes/libft.h"

int		arg_char(char c);
int		arg_int(int nbr);
int		arg_str(char *str);
int		arg_hex_lower(int nbr);
int		arg_hex_upper(int nbr);
int		ft_printf(const char *, ...);
int		arg_unsigned_int(unsigned int nbr);

char	*ft_itoa_unsigned(unsigned int n);

#endif
