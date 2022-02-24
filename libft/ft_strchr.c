/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:51:08 by dgauvin           #+#    #+#             */
/*   Updated: 2021/12/27 20:07:28 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	c_c;

	i = 0;
	c_c = (char)c;
	while (s[i])
	{
		if (s[i] == c_c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == c_c)
		return ((char *)(s + i));
	return (NULL);
}
