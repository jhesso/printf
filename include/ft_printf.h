/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhesso <jhesso@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 17:11:58 by jhesso            #+#    #+#             */
/*   Updated: 2022/12/16 13:27:32 by jhesso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/includes/libft.h"

int		arg_int(int nbr);
int		arg_str(char *str);
int		ft_printf(const char *, ...);
int		arg_hex(unsigned long long nbr, char casing);
int		arg_unsigned_int(unsigned int nbr);

char	*ft_itoa_unsigned(unsigned int n);

#endif
