/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:15:05 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/14 11:46:42 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
//int i;

//i = 0;
	while(*dest != '\0')	
    {
	dest++;
	}
		 while(*src != '\0')
		 {
			*dest = *src;
			dest++;
			src++;
		 }
		*dest = '\0';
		
		/*	if((dest[i] == 0) && (src[i] == 0))
			{
			som =	dest[i] + src[i];
			}*/
	
return(dest);	
}
int main(void)
{
char sig1[13] = "helo7o";
char sig2[] = "heloo";
char *res1 =  ft_strcat(sig1, sig2);
printf("%s",sig1);
}
