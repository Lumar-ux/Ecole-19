/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:06:47 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/15 10:52:56 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n) 
	 {
	int i;
 	i = 0;	  
     while (i < n && src[i] != '\0')
     {
       	 dest[i] = src[i];
		 i++;
	 }
		 while(i < n)
		 {
		dest[i] = '\0';
		i++;
		 }
	 		
		return (dest);
  }
 
int main(void)
  {
     char    x[] = {};
     char    y[] = "bonnjour";
	 char n = 2;
     int dest[50];
     int src[50];

     ft_strncpy(x, y, n);
     printf("%s", x);
     return (0);
 }
