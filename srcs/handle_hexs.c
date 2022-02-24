/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hexs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:26:08 by dgauvin           #+#    #+#             */
/*   Updated: 2022/01/24 22:27:27 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

void	handle_hex_upper(va_list ap, int *len)
{
	char	*str;
	int		i;

	str = convert_to_hex(va_arg(ap, unsigned int));
	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	*len += ft_strlen(str);
	ft_putstr(str);
	free(str);
}

void	handle_hex(va_list ap, int *len)
{
	char	*str;

	str = convert_to_hex(va_arg(ap, unsigned int));
	*len += ft_strlen(str);
	ft_putstr(str);
	free(str);
}
