/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:49:44 by dgauvin           #+#    #+#             */
/*   Updated: 2022/01/24 23:51:45 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"

int		ft_printf(const char *format, ...);
int		is_transformer(char c);
char	*custom_strjoin(char *s1, char *s2);
void	handle_char(va_list ap, int *len);
void	handle_string(va_list ap, int *len);
void	handle_pointer(va_list ap, int *len);
void	handle_numbers(va_list ap, int *len);
void	handle_unsigned_integer(va_list ap, int *len);
void	handle_hex(va_list ap, int *len);
void	handle_hex_upper(va_list ap, int *len);
void	handle_percent(int *len);
char	*convert_to_hex(unsigned long nbr);
char	*create_hex_number(char *number, unsigned long nbr, int len);
#endif
