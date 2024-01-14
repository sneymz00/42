/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:20:17 by camurill          #+#    #+#             */
/*   Updated: 2024/01/13 14:09:17 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(char *str, size_t n)
{
	unsigned long	i;

	i = 0;
	while (i < n)
	{
		*str = '\0';
		str++;
		i++;
	}
}

int	main(void)
{
	char s1[15] = "Hola pepe";
	ft_bzero(s1, 6);
	printf("%c\n", s1[6]);
	return (0);
}
