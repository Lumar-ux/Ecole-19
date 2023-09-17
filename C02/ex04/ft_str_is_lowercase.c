#include<unistd.h>
#include<stdio.h>
int ft_str_is_lowercase(char *str)
 {
     int i;

     i = 0;
     if(str[i] == '\0')
     {
         return(1);
     }
     while(str[i] != '\0')
     {
             if(str[i] > 97  && str[i] < 122 )
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
char str0[] = "deiceicneic";
char str1[] = "IBUHIBIBIB";
char str2[] = "456";
printf("%d", ft_str_is_lowercase(str0));
printf("%d", ft_str_is_lowercase(str1));
printf("%d", ft_str_is_lowercase(str2));
}
