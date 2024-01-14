/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:15:25 by camurill          #+#    #+#             */
/*   Updated: 2024/01/14 15:12:12 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j])
	{
		if (i + j < dstsize - 1)
			dst[i + j] = src[j];
		i++;
		j++;
	}
	return(i);
}

int main(void)
{
	char	s[10] = "Hola";
	char	p[10] = "mundo";
	int		i;
	int		t;

	i = strlcat(s, p, 5);
	t = ft_strlcat(s, p, 5); 
	printf("%s   %d\n", s, i);
	printf("%s   %d\n", s, t);
	return (0);
}
