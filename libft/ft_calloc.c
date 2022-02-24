/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:47:17 by dgauvin           #+#    #+#             */
/*   Updated: 2021/12/27 20:03:55 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pt;

	pt = malloc(nmemb * size);
	if (!pt)
		return (NULL);
	ft_bzero(pt, nmemb * size);
	return (pt);
}
