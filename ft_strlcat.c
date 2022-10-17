/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <shinfray@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:09:00 by shinfray          #+#    #+#             */
/*   Updated: 2022/10/17 01:24:10 by shinfray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	if (dstsize == 0 || dstlen >= dstsize || (!dst || !src))
		return (ft_strlen(src) + dstsize);
	return (dstlen + ft_strlcpy(dst + dstlen, src, dstsize - dstlen));
}
