/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:52:00 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/17 22:12:56 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	longeur(char *c)
{
	int	i; 

	i = 0;
	while(c[i] != '\0')
	{
		i++;
	}	
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	ok;
	char	*diff;
	
	i = 0;
	j = 0;
	ok = 1;
	diff = str;
	while ((i < longeur(str)) - (longeur(to_find)))
	{
		i++;
			if (to_find[i] == to_find[0])
			{
				while(j < longeur(to_find) && ok == 1)
				{		
					if (to_find[i+j] != to_find[j])
					{
					ok = 0;
					}
						if (to_find[i+j] == to_find[j] && j == (longeur(to_find) - 1))
						{
						j++;
						}
						return &to_find[i];
				}
				ok = 1;
			}
	}	
	return (to_find);
}

int main(void)
{
char sig1[] = "Ecole 19, aime Ecole 42";
char sig2[] = "aime";
char *res1 =  ft_strstr(sig1, sig2);
printf("%s", res1);
}
