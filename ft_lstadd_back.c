/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimikim <jimikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:52:18 by jimikim           #+#    #+#             */
/*   Updated: 2021/05/06 16:57:38 by jimikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*result;

	if (!new || !lst)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		result = *lst;
		while (result->next)
			result = result->next;
		result->next = new;
	}
}
