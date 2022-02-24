/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:49:39 by dgauvin           #+#    #+#             */
/*   Updated: 2021/12/21 17:08:09 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pt;

	pt = (unsigned char *)s;
	while (n > 0)
	{
		pt[n - 1] = (unsigned char)c;
		n--;
	}
	return (s);
}	
