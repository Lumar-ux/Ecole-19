/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:15:05 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/17 21:45:15 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>
//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*som;

	som = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (som);
}
/*int main(void)
{
char sig1[13] = "helo7o";
char sig2[] = "heloo";
printf("%s", ft_strcat(sig1, sig2));
return (0);
}*/