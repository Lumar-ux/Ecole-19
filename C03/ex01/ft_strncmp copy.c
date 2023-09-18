/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:41:10 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/14 09:54:39 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2 , unsigned int n )
{
return strncmp(s1, s2, n);
}
int main(void)
{
char sig1[] = "heloo";
char sig2[] = "heloo";
char dig1[] = "HElloo";
char dig2[] = "zElloo";
char n = 3;
int res1 =  ft_strncmp(sig1, sig2, n );
int res2 =  ft_strncmp(dig1, dig2, n );
 printf("%d ", res1);
printf("%d", res2);
}
