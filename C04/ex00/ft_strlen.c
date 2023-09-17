/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:05:14 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/14 15:47:57 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
	i++;
	}
	return(i);
}

int main(void)
{
char str0[] = "Hello World";
char str1[] = "HelloWorld";
char str2[] = "456";
printf("%d ,", ft_strlen(str0));
printf("%d ,", ft_strlen(str1));
printf("%d ,", ft_strlen(str2));
}

