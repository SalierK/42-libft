/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:54:41 by kkilitci          #+#    #+#             */
/*   Updated: 2023/07/06 15:33:18 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;
	char	ch;

	ch = (char)c;
	i = 0;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == ch)
			return (str + i);
		i++;
	}
	if (ch == 0)
		return (str + i);
	return (0);
}
