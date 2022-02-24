/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:25:49 by dgauvin           #+#    #+#             */
/*   Updated: 2021/12/27 20:07:00 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t				i;
	size_t				j;
	size_t				destlen;
	size_t				srclen;

	i = 0;
	j = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = destlen;
	if (size <= destlen)
		return (size + srclen);
	if (size <= 0)
		return (srclen);
	while (src[j] != '\0' && j < size - destlen - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (destlen + srclen);
}
