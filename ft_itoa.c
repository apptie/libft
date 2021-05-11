/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 12:44:07 by jimikim           #+#    #+#             */
/*   Updated: 2021/05/06 13:24:42 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t		ft_get_size(int n)
{
	size_t			len;
	unsigned int	nbr;

	len = 0;
	if (n < 0)
	{
		len++;
		nbr = n * -1;
	}
	else if (n == 0)
		return (1);
	else
		nbr = n;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

static unsigned int	ft_get_nbr(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}

char				*ft_itoa(int n)
{
	unsigned int	nbr;
	char			*result;
	size_t			size;

	size = ft_get_size(n);
	if (!(result = (char *)malloc((size + 1) * sizeof(char))))
		return (0);
	result[size--] = 0;
	nbr = ft_get_nbr(n);
	if (n < 0)
		result[0] = '-';
	else if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	else
		nbr = n;
	while (nbr != 0)
	{
		result[size--] = '0' + (nbr % 10);
		nbr = nbr / 10;
	}
	return (result);
}
