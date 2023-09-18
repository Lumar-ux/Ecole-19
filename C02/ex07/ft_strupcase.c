#include<unistd.h>
#include<stdio.h>
char	*ft_strupcase(char *str)
{
		int i;

		i = 0;
		while(str[i] != '\0')
		{
			if(str[i] >= 97  && str[i] <= 122 )
              {
              str[i] = str[i] - 32;
			  	  
			  }
		i++;	           
		}
return(str);
}

int main(void)
{
char str0[] = "aieiceicneiz";
//char str1[] = "IBUHIBIBIB";
printf("%s", ft_strupcase(str0));
//printf("%c", ft_strupcase(str1));
}
