/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:41:54 by kkilitci          #+#    #+#             */
/*   Updated: 2023/07/11 15:57:12 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	const char	*srcg;
	char		*dstg;

	if (!dst && !src && !n)
		return (NULL);
	else if (!dst && !src)
		return (NULL);
	i = 0;
	dstg = dst;
	srcg = src;
	while (i < n)
	{
		dstg[i] = srcg[i];
		i++;
	}
	return (dst);
}
