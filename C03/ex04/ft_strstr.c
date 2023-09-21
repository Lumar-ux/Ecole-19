/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:51:16 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/17 23:00:06 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	longeur(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i = 0;
	int j = 0;
	int ok = 1;

while(str[i] != '\0')
{
	if(to_find[j] == str[i])
	{
		while(j < longeur(to_find) && ok == 1)
		{
			if(to_find[j] != str[i+j])
				{
				ok = 0;
				}
			if(to_find[j] == str[i+j] && j == longeur(to_find) - 1)
				{	
				return &str[i];
				}
			j++;
		}
		ok = 1;
	}
	i++;
}
return NULL;
}
int main(void)
{
char sig1[] = "Ecole 19, aime Ecole 42";
char sig2[] = "aime";
char *res1 =  ft_strstr(sig1, sig2);

if(res1 != NULL)
{
printf("%s", res1);
}
else
{
printf("NULL");
}
return (0);
}