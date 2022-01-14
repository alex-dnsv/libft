/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thera <thera@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 00:02:05 by thera             #+#    #+#             */
/*   Updated: 2021/10/20 13:00:03 by thera            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if ((*lst) != NULL && del != NULL)
	{
		while ((*lst) != NULL)
		{
			ptr = (*lst)->next;
			del((*lst)->content);
			free((*lst));
			*lst = ptr;
		}
	}
}
