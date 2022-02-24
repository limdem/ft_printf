/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:49:30 by dgauvin           #+#    #+#             */
/*   Updated: 2021/12/27 18:16:20 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pt_dest;
	const unsigned char	*pt_src;

	pt_dest = (unsigned char *)dest;
	pt_src = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (pt_src < pt_dest)
	{
		while (n--)
			*(pt_dest + n) = *(pt_src + n);
	}
	else
	{
		while (n--)
			*pt_dest++ = *pt_src++;
	}
	return (dest);
}	
