/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 12:48:26 by camurill          #+#    #+#             */
/*   Updated: 2024/01/14 14:53:40 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    int i;
    const char  *p1;
    const char  *p2;

    p1 = s1;
    p2 = s2;
    i = 0;

    while (i < n - 1 && *p1 == *p2)
        i++;
    return ((int)(p1[i] - p2[i]));
}

int	main(void)
{
	 char t[10] = "abcd";
	 char p[10] = "acde";
	 size_t n = 3;
	 printf("%d\n", memcmp(t, p, n));
	 printf("%d\n", ft_memcmp(t, p, n));
	 return (0);
}
