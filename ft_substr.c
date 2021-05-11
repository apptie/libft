/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:44:16 by jimikim           #+#    #+#             */
/*   Updated: 2021/05/10 09:05:13 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*result;
	unsigned int	size;

	if (!s)
		return (0);
	size = ft_strlen(s);
	if (len == 0 || size < start)
		return (ft_strdup(""));
	if (size > len)
		size = len;
	if (!(result = (char *)malloc((size + 1) * sizeof(char))))
		return (0);
	ft_strlcpy(result, s + start, size + 1);
	return (result);
}
