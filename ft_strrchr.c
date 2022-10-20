/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <shinfray@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:31:06 by shinfray          #+#    #+#             */
/*   Updated: 2022/10/20 15:33:49 by simonhinf        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	c2 = c;
	char		*ptr;
	char		*cast_s;

	ptr = NULL;
	cast_s = (char *)s;
	while (1)
	{
		if (*cast_s == c2)
			ptr = cast_s;
		if (*cast_s == '\0')
			return (ptr);
		++cast_s;
	}
	return (NULL);
}
