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
char str0[] = "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+UN";
char str1[] = "9,S46im2k9m-B,G#X";
char str2[] = "NdHy.@$C@=;>$`Na+Ardz)@:E,=J<D*#";
char str3[] = "OhO[Nf~";
char str4[] = "Mp^Rf}@&N?Xb@X.]^{Kh'Tpf/Ya5ht;{Ply_Xr!-2";
printf("%s", ft_strcapitalize(str0));
printf("\n\n%s", ft_strcapitalize(str1));
printf("\n\n%s", ft_strcapitalize(str2));
printf("\n\n%s", ft_strcapitalize(str3));
printf("\n\n%s", ft_strcapitalize(str4));
return(0);
}
