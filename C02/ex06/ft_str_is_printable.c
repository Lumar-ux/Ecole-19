/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 21:20:42 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/12 21:28:35 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>
int ft_str_is_printable(char *str)
  {
      int i;

      i = 0;
      if(str[i] == '\0')
      {
          return(1);
      }
      while(str[i] != '\0')
      {
              if(str[i] > 33  && str[i] < 126 )
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
int main(void)
{
char str0[] = "deicei:;-~cneic";
char str1[] = "IBUHIBIB49/-+IB";
char str2[] = "  ,";
printf("%d", ft_str_is_printable(str0));
printf("%d", ft_str_is_printable(str1));
printf("%d", ft_str_is_printable(str2));
 }

