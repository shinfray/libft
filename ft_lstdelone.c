/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <shinfray@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:42:01 by shinfray          #+#    #+#             */
/*   Updated: 2022/10/19 18:46:22 by simonhinf        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL || (del) != NULL)
	{
		(*del)(lst->content);
		free(lst);
		lst = NULL;
	}
}
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}
