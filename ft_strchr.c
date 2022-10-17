/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <shinfray@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:19:05 by shinfray          #+#    #+#             */
/*   Updated: 2022/10/17 12:08:36 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	c2 = c;

	if (s == NULL)
		return (NULL);
	while (*s != c2)
	{
		if (*s == '\0')
			return (NULL);
		++s;
	}
	return ((char *)s);
}
