#include<unistd.h>
#include<stdio.h>
char    *ft_strcapitalize(char *str)
 {
          int i;

         i = 0;
     while(str[i] != '\0')
     {
        if((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90  )  )
        {
        if(!(str[i-1] >= '0') && (str[i-1] <= '9'))  
			if (!(str[i-1]-1 >= 97) && (str[i-1] <= 122) && (str[i] >= 65) && (str[i-1] <= 90))    
                                            str[i] = str[i] - 32;

		}
     i++;
	 }
return(str);
}

int main(void)
{
char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
printf("%s", ft_strcapitalize(str1));
return(0);
}
