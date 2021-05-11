/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 13:45:24 by jimikim           #+#    #+#             */
/*   Updated: 2021/05/04 14:03:29 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;
	char	*c_s;
	char	to_find;

	result = 0;
	c_s = (char *)s;
	to_find = c;
	while (*c_s)
	{
		if (*c_s == to_find)
			result = c_s;
		if (*c_s == 0)
			break ;
		c_s++;
	}
	if (*c_s == to_find)
		result = c_s;
	return (result);
}
