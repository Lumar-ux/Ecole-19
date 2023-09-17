/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaroy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:55:12 by lmaroy            #+#    #+#             */
/*   Updated: 2023/09/12 21:00:42 by lmaroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int	ft_str_is_uppercase(char *str)
  {
      int i;

      i = 0;
      if(str[i] == '\0')
      {
          return(1);
      }
      while(str[i] != '\0')
      {
              if(str[i] > 65  && str[i] < 90 )
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
char str0[] = "deiiceicneic";
char str1[] = "IBUAZBIBIB";
char str2[] = "456";
printf("%d", ft_str_is_uppercase(str0));
printf("%d", ft_str_is_uppercase(str1));
printf("%d", ft_str_is_uppercase(str2));
}
