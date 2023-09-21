/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:38:31 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/17 21:24:12 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int    ft_strcmp(char *s1, char *s2)
{
    while (*s1 && *s2 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
int main(void)
{
char sig1[] = "heloo";
char sig2[] = "heloo";
char dig1[] = "heLLoo";
char dig2[] = "helloo";
char dig3[] = "hellook";
char dig4[] = "helloo";
int res1 =  ft_strcmp(sig1, sig2);
int res2 =  ft_strcmp(dig1, dig2);
int res3 =  ft_strcmp(dig3, dig4);
printf("%d", res1);
printf("\n%d", res2);
printf("\n%d", res3);
}