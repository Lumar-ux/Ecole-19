/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:42:37 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/12 22:28:44 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c])
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = 0;
	return (dest);
}

int	main(void)
{
	char	x[] = {};
	char	y[] = "bonnjour";
	int	dest[10];
	int	src[10];

	ft_strcpy(x, y);
	printf("%s", x);
	return (0);
}
