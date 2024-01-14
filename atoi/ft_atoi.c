/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:39:35 by camurill          #+#    #+#             */
/*   Updated: 2024/01/11 15:48:33 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int i;
    int value;
    int number;

    i = 0;
    value = 1;
    number = 0;
    while ((str[i] >= '\t' && str[i] <= '\r' ) || str[i] == 32 )
        i++;
    if (str[i] == '-' && str[i] == '+')
    {
        if (str[i] == '-')
            value = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        number = number * 10 + str[i] - '0';
        i++;
    }
    number = number * value;
    return (number);
}
int main(void)
{
    const char *str = "123456";
    int i;

    i = ft_atoi(str);
    printf("%d", i);
    return (0);
}

