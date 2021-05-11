/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 09:27:29 by jimikim           #+#    #+#             */
/*   Updated: 2021/05/06 14:35:27 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*uc_dst;
	unsigned char	*uc_src;

	if (!dst && !src)
		return (0);
	uc_dst = dst;
	uc_src = (unsigned char *)src;
	while (n--)
		*uc_dst++ = *uc_src++;
	return (dst);
}
