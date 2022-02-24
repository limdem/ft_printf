/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:47:36 by dgauvin           #+#    #+#             */
/*   Updated: 2022/01/24 23:40:06 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	create_trans_str(const char *format, int index, int *len, va_list ap)
{
	while (!is_transformer(format[index]))
		index++;
	if (format[index] == 'c')
		handle_char(ap, len);
	else if (format[index] == 's')
		handle_string(ap, len);
	else if (format[index] == 'p')
		handle_pointer(ap, len);
	else if (format[index] == 'd' || format[index] == 'i')
		handle_numbers(ap, len);
	else if (format[index] == 'u')
		handle_unsigned_integer(ap, len);
	else if (format[index] == 'x')
		handle_hex(ap, len);
	else if (format[index] == 'X')
		handle_hex_upper(ap, len);
	else if (format[index] == '%')
		handle_percent(len);
}

void	handle_new_index(const char *format, int *i, int *j)
{
	int	count;
	int	index;

	count = 2;
	index = 0;
	while (!is_transformer(format[index]))
		index++;
	count += index;
	*j += count;
	*i = *j;
	format = format + *j;
}

void	print_f_string(const char *format, int *len, int i, int j)
{
	char	*str;

	str = ft_strdup(format);
	if ((j - i) > 0)
	{
		*len += (j - i);
		ft_putstr(str + i);
	}
	free(str);
}

void	create_fstring(const char *format, int *len, va_list ap)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (format[j])
	{
		if (format[j] == '%')
		{
			*len += j - i;
			write(1, format + i, j - i);
			create_trans_str(format, j + 1, len, ap);
			handle_new_index(format + j + 1, &i, &j);
		}
		else
			j++;
	}
	print_f_string(format, len, i, j);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	ap;

	len = 0;
	va_start(ap, format);
	create_fstring(format, &len, ap);
	va_end(ap);
	return (len);
}
