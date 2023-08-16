/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:40:33 by kkilitci          #+#    #+#             */
/*   Updated: 2023/07/07 14:08:41 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1g;
	unsigned char	*s2g;
	size_t			i;

	s1g = (unsigned char *)s1;
	s2g = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (s1g[i] != s2g[i])
			return (s1g[i] - s2g[i]);
		i = i + 1;
	}
	return (0);
}
