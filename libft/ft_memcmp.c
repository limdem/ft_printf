/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:49:07 by dgauvin           #+#    #+#             */
/*   Updated: 2021/12/27 20:06:09 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*pt_s1;
	const unsigned char		*pt_s2;
	size_t					i;

	pt_s1 = (const unsigned char *)s1;
	pt_s2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (pt_s1[i] != pt_s2[i])
			return (pt_s1[i] - pt_s2[i]);
		i++;
	}	
	return (0);
}
