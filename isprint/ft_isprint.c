/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 14:46:38 by camurill          #+#    #+#             */
/*   Updated: 2024/01/13 14:51:35 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c<= 126)
		return (1);
	return (0);
}

int	main(void)
{
	int	i;

	i = ft_isprint(' ');
	printf("%d", i);
	return (0);
}
