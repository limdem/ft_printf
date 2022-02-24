/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgauvin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 21:58:18 by dgauvin           #+#    #+#             */
/*   Updated: 2022/01/24 23:32:01 by dgauvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	handle_numbers(va_list ap, int *len)
{
	char	*str;

	str = ft_itoa(va_arg(ap, int));
	*len += ft_strlen(str);
	ft_putstr(str);
	free(str);
}
