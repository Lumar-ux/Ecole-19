/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:38:31 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/14 10:46:27 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	i = 0;

	while((s1[i] != '\0') && (s2[i] != '\0'))
	{
		if((((s1[i] == s2[i]) && (s1[i]==0) && (s2[i]==0))))
		{
		diff =	s1[i] - s2[i] ;
		}
		else if(((( s1[i] > s2[i]) && (s1[i]) && (s2[i]))))
			{
			diff =  s1[i] - s2[i];
			}
		else if((((s1[i] <  s2[i]) && (s1[i]) &&(s2[i]))))
				{
				diff =  s1[i] - s2[i];
				}
	 		i++;
	}
return(diff);
}
int main(void)
{
	char sig1[] = "heloo";
	char sig2[] = "heloo";
char dig1[] = "heLLoo";
char dig2[] = "helloo";
int res1 =  ft_strcmp(sig1, sig2);
int res2 =  ft_strcmp(dig1, dig2);
 printf("%d ", res1);
printf("%d", res2);
}

