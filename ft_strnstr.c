/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:42:12 by jimikim           #+#    #+#             */
/*   Updated: 2021/05/06 18:06:17 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_size;
	size_t	haystack_size;

	if (!*needle)
		return ((char *)haystack);
	needle_size = ft_strlen(needle);
	haystack_size = ft_strlen(haystack);
	if (haystack_size == 0 || len < needle_size)
		return (0);
	while (len-- >= needle_size && *haystack)
	{
		if (ft_memcmp(haystack, needle, needle_size) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
