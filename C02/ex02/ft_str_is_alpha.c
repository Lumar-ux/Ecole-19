/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:44:52 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/14 16:02:11 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>
int ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if(str[i] == '\0')
	{
		return(1);
	}
	while(str[i] != '\0')
	{
			if(str[i] > 64  && str[i] < 91 )
			{
			return(1);
			}
			if(str[i] > 96  && str[i] < 123 )
			{
			return(1);
			}
			else
			{
			return(0);	
			}
			str++;	
	}
return(1);
}	
int	main(void)
{
char str0[] = "Hello World";
char str1[] = "HelloWorld";
char str2[] = "456";
printf("%d", ft_str_is_alpha(str0));
printf("%d", ft_str_is_alpha(str1));
printf("%d", ft_str_is_alpha(str2));
}
