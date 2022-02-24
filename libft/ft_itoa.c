/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:48:43 by dgauvin           #+#    #+#             */
/*   Updated: 2021/12/23 15:07:15 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbrlen(int n)
{
	long	nbr_len;
	long	nb;

	nbr_len = 1;
	nb = (long)n;
	if (nb < 0)
	{
		nbr_len++;
		nb = -nb;
	}	
	while (nb / 10 >= 1)
	{	
		nbr_len++;
		nb /= 10;
	}
	return (nbr_len);
}	

static void	fillstr(char *str, int n, int index)
{
	long	nb;

	nb = (long)n;
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb > 9)
		fillstr(str, nb / 10, index - 1);
	str[index] = nb % 10 + 48;
}	

char	*ft_itoa(int n)
{
	char	*str;

	str = malloc(nbrlen(n) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	fillstr(str, n, nbrlen(n) - 1);
	str[nbrlen(n)] = '\0';
	return (str);
}	
