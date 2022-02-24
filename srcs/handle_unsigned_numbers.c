/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_unsigned_numbers.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:24:36 by dgauvin           #+#    #+#             */
/*   Updated: 2022/01/24 22:25:50 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ufillstr(char *str, unsigned int n, int index)
{
	unsigned int	nb;

	nb = (unsigned int)n;
	if (nb > 9)
		ufillstr(str, nb / 10, index - 1);
	str[index] = nb % 10 + 48;
	str[index + 1] = '\0';
}

static int	unbrlen(unsigned int n)
{
	unsigned int	nbr_len;
	unsigned int	nb;

	nbr_len = 1;
	nb = (unsigned int)n;
	while (nb / 10 >= 1)
	{	
		nbr_len++;
		nb /= 10;
	}
	return (nbr_len);
}

char	*ft_uitoa(unsigned int n)
{
	char	*str;

	str = malloc(unbrlen(n) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	ufillstr(str, n, unbrlen(n) - 1);
	return (str);
}

void	handle_unsigned_integer(va_list ap, int *len)
{
	char	*str;

	str = ft_uitoa(va_arg(ap, unsigned int));
	*len += ft_strlen(str);
	ft_putstr(str);
	free(str);
}
