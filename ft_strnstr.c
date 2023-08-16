/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:11:46 by kkilitci          #+#    #+#             */
/*   Updated: 2023/07/07 15:18:59 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)haystack;
	i = 0;
	if (!ft_strlen(needle) || needle == str)
		return (str);
	if (!len)
		return (0);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == needle[j])
		{
			if (needle[j + 1] == 0 && i + j < len)
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
