/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <shinfray@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:02:04 by shinfray          #+#    #+#             */
/*   Updated: 2022/10/17 12:47:31 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	c2 = c;
	const unsigned char	*ptr;

	if (s != NULL && n != 0)
	{
		ptr = (const unsigned char *)s;
		while (n-- != 0)
		{
			if (*ptr == c2)
				return ((void *)ptr);
			++ptr;
		}
	}
	return (NULL);
}
