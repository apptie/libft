/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:29:05 by jimikim           #+#    #+#             */
/*   Updated: 2021/05/11 09:06:29 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	size;
	char			*result;

	if (!s || !f)
		return (0);
	size = ft_strlen(s);
	if (!(result = (char *)malloc((size + 1) * sizeof(char))))
		return (0);
	i = 0;
	result[size] = 0;
	while (*s)
	{
		result[i] = f(i, *s);
		i++;
		s++;
	}
	return (result);
}
