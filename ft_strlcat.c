/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 09:23:12 by kkilitci          #+#    #+#             */
/*   Updated: 2023/07/06 12:00:41 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	len_dst;
	size_t	i;

	s = (char *)src;
	len_dst = 0;
	i = 0;
	if (dst)
		len_dst = ft_strlen(dst);
	if (len_dst >= size)
		len_dst = size;
	else
	{
		while (s[i] && (len_dst + 1) < size && !(len_dst >= size))
		{
			dst[len_dst] = s[i];
			len_dst++;
			i++;
		}
		dst[len_dst] = '\0';
	}
	return (len_dst + ft_strlen(s) - i);
}
