/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:15:25 by camurill          #+#    #+#             */
/*   Updated: 2024/01/13 21:26:33 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	return (0);
}

int main(void)
{
	char	s[10] = "Hola";
	int		i;

	i = strlcat(s, "mundo", 10);
	printf("%s\n%d", s, i);
	return (0);
}
