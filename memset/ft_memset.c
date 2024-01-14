/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:39:29 by camurill          #+#    #+#             */
/*   Updated: 2024/01/13 16:39:09 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned long	i;
	unsigned char	*put;

	i = 0;
	put = (unsigned char *)str;
	while (i < n)
	{
		put[i]  = (unsigned char)c;
		i++;
	}
	return (0);
}

int main(void)
{
	char x[20] = "Hola Mundo";
	printf("%s\n", x);
	ft_memset(x, 304, 3);
	printf("%s\n", x);
	return (0);
}
