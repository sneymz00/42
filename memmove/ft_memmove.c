/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:18:10 by camurill          #+#    #+#             */
/*   Updated: 2024/01/13 18:14:11 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int	i;

	if (dest < src)
	{
		i = 0;
		while (i > len)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else if (dest > src)
	{
		i = len;
		while (i > 0)
		{
			((unsigned char *)dest)[i -1] = ((unsigned char *)src)[i -1];
			i--;
		}
	}
	return (0);
}

int	main(void)
{
	char	*s1 = strdup("123456789");
	char	*dst2 = strdup("123456789");
	memmove(dst2, "abcde", 5);
	printf("%s\n", dst2);
	ft_memmove(s1, "abcde", 5);
	printf("%s", s1); 
	return (0);
}
