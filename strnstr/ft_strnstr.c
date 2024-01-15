/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:13:01 by camurill          #+#    #+#             */
/*   Updated: 2024/01/14 16:58:11 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	if (needle[i])
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while (haystack[i] && needle[j] && haystack[i] == needle[j] && i < len)
		{
			i++;
			j++;
		}
		if (i - j < len)
			return (NULL);
		if (needle[i] == '\0')
			return ((char *)&haystack[i - j]);
		i = i - j +1;
	}
	return (NULL);
}
int main(void)
{
	char *p;
	char *s;

	p = strnstr("Hola Mundo bienve", "Mundo", 7);
	s = ft_strnstr("Hola Mundo bienve", "o b", 17);
	printf("%s\n%s", p, s);
	return (0);
}	
