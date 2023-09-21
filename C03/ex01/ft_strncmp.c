/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:41:10 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/20 16:56:17 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned	int i;
	unsigned	int e;

	i = 0;
	e = 0;
   while (s1[i] && s2[e] && (s1[i] == s2[e]) && n > e && n > i) 
    {
        i++;
        e++;
    }
    return (s1[i] - s2[e]);
}
/*int main(void)
{
char sig1[] = "heloo";
char sig2[] = "heloo";
char dig1[] = "helLoo";
char dig2[] = "helloo";
char nig1[] = "helloo";
char nig2[] = "khelloo";
int	n = 2;
int res1 =  ft_strncmp(sig1, sig2, n);
int res2 =  ft_strncmp(dig1, dig2, n);
int res3 =  ft_strncmp(nig1, nig2, n);
printf("%d", res1);
printf("\n%d", res2);
printf("\n%d", res3);
}*/
