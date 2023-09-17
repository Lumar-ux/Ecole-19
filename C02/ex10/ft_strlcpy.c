#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
     {
    unsigned	int i;
	unsigned	int	src_len;	
	
    i = 0;
	src_len = 0;
     while (i <  size - 1 && src[i] != '\0')
     {
	dest[i] = src[i];
     i++;
     }
    
        dest[i] = '\0';       
//	return(&i);

	while (src[src_len] != '\0') 
	{
        src_len++;
    }
	return (src_len);
  }


int main(void)
  {
     char    y[] = "bonnjour";
	 char    n[] = "boddnnjour";
     unsigned int size = 12;
     char dest[50];
	 unsigned int result = ft_strlcpy(dest, y, size);
	 //ft_strlcpy(dest, y, size);
	 printf("%u\n", result);
	printf("%s\n", dest);
	 // printf("%s", ft_strlcpy);
     return (0);
 }
