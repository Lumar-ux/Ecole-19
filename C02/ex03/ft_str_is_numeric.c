#include<unistd.h>
#include<stdio.h>
int ft_str_is_numeric(char *str)
{
      int i;
 
      i = 0;
      if(str[i] == '\0')
      {
          return(0);
      }
      while(str[i] != '\0')
      {
              if(str[i] > 64  && str[i] < 91)
              {
              return(0);
              }
              if(str[i] > 96  && str[i] < 123)
              {
              return(0);
              }
              else
              {
              return(1);
              }
              str++;
      }
  return(1);
 }

int main(void)
 {
 char str0[] = "Hello World";
 char str1[] = "HelloWorld";
 char str2[] = "456";
 printf("%d", ft_str_is_numeric(str0));
 printf("%d", ft_str_is_numeric(str1));
 printf("%d", ft_str_is_numeric(str2));
 }
