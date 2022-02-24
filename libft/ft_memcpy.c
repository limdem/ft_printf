/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:49:17 by dgauvin           #+#    #+#             */
/*   Updated: 2021/12/27 20:05:03 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*pt_dest;
	const unsigned char	*pt_src;

	pt_dest = (unsigned char *)dest;
	pt_src = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (n > 0)
	{
		pt_dest[n - 1] = pt_src[n - 1];
		n--;
	}
	return (dest);
}
