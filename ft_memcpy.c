/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <shinfray@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:48:14 by shinfray          #+#    #+#             */
/*   Updated: 2022/10/17 23:23:53 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*cast_dst;
	const char	*cast_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	cast_dst = (char *)dst;
	cast_src = (const char *)src;
	while (n--)
		*cast_dst++ = *cast_src++;
	return (dst);
}
