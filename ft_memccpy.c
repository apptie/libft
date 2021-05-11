/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 09:48:18 by jimikim           #+#    #+#             */
/*   Updated: 2021/05/10 10:20:35 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*uc_dst;
	unsigned char	*uc_src;
	unsigned char	to_find;

	uc_dst = dst;
	uc_src = (unsigned char *)src;
	to_find = c;
	while (n--)
	{
		*uc_dst++ = *uc_src;
		if (*uc_src == to_find)
			return ((void *)uc_dst);
		uc_src++;
	}
	return (0);
}
