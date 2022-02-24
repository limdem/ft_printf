/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:53:59 by dgauvin           #+#    #+#             */
/*   Updated: 2021/12/28 18:10:38 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*new_subs;
	size_t		i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		new_subs = malloc(ft_strlen(s) * sizeof(char) + 1);
	else if (len == ft_strlen(s))
		new_subs = malloc((len - ft_strlen(s) + 1) * sizeof(char) + 1);
	else
		new_subs = malloc(len * sizeof(char) + 1);
	if (!new_subs)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		new_subs[i] = s[start + i];
		i++;
	}
	new_subs[i] = '\0';
	return (new_subs);
}
