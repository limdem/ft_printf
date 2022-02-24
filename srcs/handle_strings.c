/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_strings.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:23:24 by dgauvin           #+#    #+#             */
/*   Updated: 2022/01/24 22:24:05 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	handle_string(va_list ap, int *len)
{
	char	*str;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		*len += 6;
		ft_putstr("(null)");
		return ;
	}
	*len += ft_strlen(str);
	ft_putstr(str);
}
