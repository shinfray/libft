/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <shinfray@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:14:13 by shinfray          #+#    #+#             */
/*   Updated: 2022/10/20 12:04:05 by simonhinf        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*cast_dst;
	const char	*cast_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	cast_dst = (char *)dst;
	cast_src = (const char *)src;
	if (dst < src)
		ft_memcpy(dst, src, len);
	else if (dst != src)
	{
		while (len-- != 0)
			cast_dst[len] = cast_src[len];
	}
	return (dst);
}
