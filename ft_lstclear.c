/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <shinfray@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:50:53 by shinfray          #+#    #+#             */
/*   Updated: 2022/10/19 12:31:50 by simonhinf        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	void	*saved_next;

	if (lst == NULL || (del) == NULL)
		return ;
	if (*lst == NULL)
		return ;
	else
	{
		while (*lst != NULL)
		{
			saved_next = (*lst)->next;
			ft_lstdelone(*lst, (del));
			*lst = saved_next;
		}
	}
}
