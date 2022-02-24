/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:50:57 by dgauvin           #+#    #+#             */
/*   Updated: 2021/12/27 19:27:34 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_number(char const *s, char c)
{
	int	count_words;
	int	is_word;
	int	i;

	count_words = 0;
	is_word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && is_word == 0)
		{
			count_words++;
			is_word = 1;
		}
		if (s[i] == c)
			is_word = 0;
		i++;
	}
	return (count_words);
}

static void	fill_strs(char **strs, char const *s, char c)
{
	int	i;
	int	index;
	int	word_len;

	i = 0;
	index = 0;
	while (s[i])
	{
		word_len = 0;
		if (s[i] != c)
		{
			while (s[i + word_len] != c && s[i + word_len])
				word_len++;
			strs[index] = malloc((word_len + 1) * sizeof(char));
			if (!strs[index])
				return ;
			ft_strlcpy(strs[index], s + i, word_len + 1);
			index++;
			i = i + word_len;
		}
		else
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		words_nbr;

	if (!s)
		return (NULL);
	words_nbr = words_number(s, c);
	strs = malloc((words_nbr + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	fill_strs(strs, s, c);
	strs[words_nbr] = NULL;
	return (strs);
}
