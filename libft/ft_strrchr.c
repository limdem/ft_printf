/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:53:39 by dgauvin           #+#    #+#             */
/*   Updated: 2021/12/22 16:17:58 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*pt;
	char	c_c;

	i = 0;
	pt = NULL;
	c_c = (char)c;
	while (s[i])
	{
		if (s[i] == c_c)
			pt = (char *)(s + i);
		i++;
	}
	if (s[i] == c_c)
		pt = (char *)(s + i);
	return (pt);
}	
