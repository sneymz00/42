/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 13:28:49 by camurill          #+#    #+#             */
/*   Updated: 2024/01/09 14:06:46 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_toupper(char alpha)
{
	if (alpha >= 'a' && alpha <= 'z')
	{
		alpha -= 32;
	}
	return (alpha);
}

int	main(void)
{
	char	i;

	i = ft_toupper('a');
	printf("%c\n", i);
	return (0);
}
