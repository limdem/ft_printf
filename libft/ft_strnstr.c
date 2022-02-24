/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:53:28 by dgauvin           #+#    #+#             */
/*   Updated: 2021/12/27 18:43:09 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*big_c;

	i = 0;
	j = 0;
	big_c = (char *)big;
	if (!ft_strncmp(little, "", 1))
		return (big_c);
	while (big_c[i] && i < len)
	{
		j = 0;
		while (big_c[i + j] == little[j]
			&& i + j < len && big_c[i + j] && little[j])
			j++;
		if (j == ft_strlen(little))
			return ((char *)big_c + i);
		i++;
	}	
	return (NULL);
}
