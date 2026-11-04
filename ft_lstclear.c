/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrienallaria <adrienallaria@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:58:28 by adrienallar       #+#    #+#             */
/*   Updated: 2026/11/03 20:28:05 by adrienallar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*save;

	while (*lst)
	{
		save = *lst;
		*lst = (*lst)->next;
		del(save->content);
		free(save);
	}
}
