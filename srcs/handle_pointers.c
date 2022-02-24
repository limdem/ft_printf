/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_pointers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:19:18 by dgauvin           #+#    #+#             */
/*   Updated: 2022/01/24 22:23:07 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*create_hex_number(char *number, unsigned long nbr, int len)
{
	char	*hex;

	hex = ft_strdup("0123456789abcdef");
	if (nbr > 15)
		create_hex_number(number, nbr / 16, len - 1);
	number[len - 1] = hex[nbr % 16];
	number[len] = '\0';
	free(hex);
	return (number);
}

char	*convert_to_hex(unsigned long nbr)
{
	char			*number;
	unsigned long	nbr_tmp;
	int				len;

	len = 1;
	nbr_tmp = nbr;
	while (nbr_tmp / 16 >= 1)
	{
		len++;
		nbr_tmp /= 16;
	}
	number = malloc(sizeof(char) * (len + 1));
	number = create_hex_number(number, nbr, len);
	return (number);
}

void	handle_pointer(va_list ap, int *len)
{
	unsigned long	dec_address;
	char			*hex_address;

	dec_address = (unsigned long)va_arg(ap, unsigned long);
	if (dec_address == 0)
	{
		hex_address = ft_strdup("0");
	}
	else
	{
		hex_address = convert_to_hex(dec_address);
	}
	hex_address = custom_strjoin(ft_strdup("0x"), hex_address);
	*len += ft_strlen(hex_address);
	ft_putstr(hex_address);
	free(hex_address);
}
