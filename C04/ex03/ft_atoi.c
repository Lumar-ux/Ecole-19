/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:35:10 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/20 21:03:43 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
    int	oi;
    int i;
    int sign;
    //char *argv;
sign = 1;
    oi = 0;
    i = 0;
    //*str = *argv;
    
        while ((str[i] == 32) || (str[i] >= 9) && (str[i] <= 13))
        {
	        i++;
        }
        while (str[i] == 45 || (str[i] == 43))
        {
            if(str[i] == 45)
            {
              sign = sign * -1; 
            }
            i++;
        }
        while ((str[i] >= '0') && (str[i] <= '9') && (str[i] != '\0'))
        {
            /*if(str[i] != '\0')
            {*/
            oi = oi * 10;
            oi = oi + str[i] - '0';
            //}
            i++;
        }
        //if((str[i] <= 'a') || str[i] != '\0'))
    return(oi) * sign;
}
int main (void/*int argc, char *argv[]*/)
{
/*int v;
int n; 

v = 0;*/
char at[] = "    ---+--+1234ab567";
printf ("%d\n", ft_atoi(at));
//printf ("%d\n", ft_atoi(&argv[n][v]));
return(0);
}
