/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:55:49 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/14 17:57:29 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
   	int i;
	i		
	i = 0;
	
    while (str[i] != '\0')  
    {
        write (1, &str, 1);
		write (1, "\n", 1);
       i++;
    }
}
int main(void)
{
char str0[] = {72 ,101 ,108 ,108 ,111 ,32 ,87 ,111 ,114 ,108 ,100};
ft_putstr(str);
}
