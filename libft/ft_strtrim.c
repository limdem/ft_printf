/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:53:51 by dgauvin           #+#    #+#             */
/*   Updated: 2021/12/27 20:14:50 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}	

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	int			i;
	int			len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	if (!ft_strncmp(set, "", 1))
		return (ft_strdup(s1));
	while (s1[i] && is_set(set, s1[i]) == 1)
		i++;
	while (len > 0 && is_set(set, s1[len - 1]) == 1)
		len--;
	if (len - i <= 0)
		return (ft_strdup(""));
	if (i == 0 && len == (int)ft_strlen(s1))
	{
		str = ft_strdup(s1);
		return (str);
	}		
	str = ft_substr(s1, i, len - i);
	return (str);
}
