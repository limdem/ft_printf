/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 21:53:45 by dgauvin           #+#    #+#             */
/*   Updated: 2022/01/24 21:56:45 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	is_transformer(char c)
{
	char	*transformers_list;
	int		i;

	transformers_list = ft_strdup("cspdiuxX%");
	i = 0;
	while (transformers_list[i])
	{
		if (transformers_list[i] == c)
		{
			free(transformers_list);
			return (1);
		}
		i++;
	}
	free(transformers_list);
	return (0);
}

char	*custom_strjoin(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	i = -1;
	j = -1;
	if (!s2)
		return (NULL);
	if (!s1)
		s1 = ft_strdup("");
	str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	while (s1[++i])
		str[i] = s1[i];
	while (s2[++j])
		str[i + j] = s2[j];
	str[i + j] = '\0';
	free(s1);
	free(s2);
	return (str);
}
