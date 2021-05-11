/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 10:08:35 by jimikim           #+#    #+#             */
/*   Updated: 2021/05/06 14:43:10 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*uc_dst;
	unsigned char	*uc_src;

	if (!dst && !src)
		return (0);
	if (src < dst)
	{
		uc_dst = dst + (len - 1);
		uc_src = (unsigned char *)src + (len - 1);
		while (len--)
			*uc_dst-- = *uc_src--;
	}
	else
	{
		uc_dst = dst;
		uc_src = (unsigned char *)src;
		while (len--)
			*uc_dst++ = *uc_src++;
	}
	return (dst);
}
