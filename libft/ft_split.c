/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 18:31:10 by camurill          #+#    #+#             */
/*   Updated: 2024/01/26 03:57:29 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count(char const *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			count++;
		while (*str != c && *str)
			str++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	size_t	count;
	char	**split;

	i = 0;
	split = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!s || !split)
		return (0);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				count = ft_strlen(s);
			else
				count = ft_strchr(s, c) - s;
			split[i] = ft_substr(s, 0, count);
			s = count + s;
			i++;
		}
	}
	split[i] = 0;
	return (split);
}
