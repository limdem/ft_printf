/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:48:57 by dgauvin           #+#    #+#             */
/*   Updated: 2021/12/21 16:52:18 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*pt;
	size_t				i;

	pt = (const unsigned char *)s;
	i = 0;
	c = (unsigned char)c;
	while (i < n)
	{
		if (pt[i] == c)
			return ((char *)(s + i));
		i++;
	}
	return (0);
}	
