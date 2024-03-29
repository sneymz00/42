/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:55:06 by camurill          #+#    #+#             */
/*   Updated: 2024/01/14 17:06:01 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy (char *dst, char *src, size_t size)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return ((size_t)(src));
}

int	main(void)
{
	char r[10];
	size_t i;

	i = ft_strlcpy(r, "Hola", 3);
	printf("%s\n%zu", r, i);
	return (0);
}
