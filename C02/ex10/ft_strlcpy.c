#include <unistd.h>
#include <stdio.h>

unsigned *ft_strlcpy(char *dest, char *src, unsigned int size)
     {
    unsigned int i;
	int src_len;	
	
    i = 0;
	src_len = 0;
     while (i <  size - 1 && src[i] != '\0')
     {
	dest[i] = src[i];
     i++;
     }
    
        dest[i] = '\0';       
	return(i);

	while (src[src_len] != '\0') 
	{
        src_len++;
    }
  }


/*int main(void)
  {
     char    y[] = "bonnjour";
	 char    n[] = "boddnnjour";
     char size = 12;
     char dest[50];
	 ft_strlcpy(dest, y, size);
     printf("%zu",dest);
	 printf("%zu", strlcpy(dest, y, size)); 
	 printf("%zu", ft_strlcpy);
     return (0);
 }*/
