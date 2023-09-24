/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <lmaroy@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:05:09 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/24 15:17:39 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int oi;
    int i;
    int sign;

    sign = 1;
    oi = 0;
    i = 0;
    while ((str[i] == 32) || ((str[i] >= 8) && (str[i] <= 13)))
    {
        i++;
    }
    while ((str[i] == 45) || (str[i] == 43))
    {
        if (str[i] == 45)
        {
            sign = sign * - 1;
        }
        i++;
    }
    while ((str[i] >= '0') && (str[i] <= '9') && (str[i] != '\0'))
    {
        oi = oi * 10;
        oi = oi + str[i] - '0';
        i++;
    }
    return ((oi) * sign);
}
/*int main (void)
{
char at[] = "    -- -+--+1234ab567";
printf ("%d\n", ft_atoi(at));
return(0);
}*/
