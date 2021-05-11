/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 08:20:17 by jimikim           #+#    #+#             */
/*   Updated: 2021/05/07 11:40:54 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	uc_c;
	unsigned char	*uc_b;

	uc_c = c;
	uc_b = b;
	while (len--)
		*uc_b++ = uc_c;
	return (b);
}
