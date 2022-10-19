/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinfray <shinfray@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:22:29 by shinfray          #+#    #+#             */
/*   Updated: 2022/10/19 13:09:43 by simonhinf        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	ft_atoi(const char *str)
{
	unsigned long long int	n;
	char					sign;

	n = 0;
	sign = 1;
	while (ft_isspace(*str) != 0)
		++str;
	if (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			sign = -1;
	}
	while (ft_isdigit(*str) != 0)
	{
		n = n * 10 + *str++ - '0';
		if (n > LLONG_MAX && sign > 0)
			return (-1);
		if (n > LLONG_MAX && sign < 0)
			return (0);
	}
	return (n * sign);
}
