/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 10:31:39 by jimikim           #+#    #+#             */
/*   Updated: 2021/05/04 10:42:50 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*uc_s;
	unsigned char	to_find;

	uc_s = (unsigned char *)s;
	to_find = c;
	while (n--)
	{
		if (*uc_s == to_find)
			return ((void *)uc_s);
		uc_s++;
	}
	return (0);
}
