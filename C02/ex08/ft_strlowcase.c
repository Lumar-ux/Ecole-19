#include<unistd.h>
#include<stdio.h>
char    *ft_strlowcase(char *str)
{
         int i;

         i = 0;
         while(str[i] != '\0')
         {
             if(str[i] >= 65  && str[i] <= 90)
               {
               str[i] = str[i] +  32;

               }
         i++;
         }
 return(str);
 }

 int main(void)
 {
 char str1[] = "IBUHIBIBIB";
 printf("%s", ft_strlowcase(str1));
 return(0);
 }
