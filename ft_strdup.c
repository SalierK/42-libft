/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkilitci <kkilitci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:21:49 by kkilitci          #+#    #+#             */
/*   Updated: 2023/07/10 09:47:38 by kkilitci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*str)
{
	size_t	len;
	size_t	i;
	char	*new_str;

	i = 0;
	len = ft_strlen(str) + 1;
	new_str = (char *)malloc(len);
	if (new_str == NULL)
		return (NULL);
	while (i < ft_strlen(str))
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
