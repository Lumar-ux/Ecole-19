#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        i++;
    }
    return(i);
}

char *ft_strdup(char *src)
{
   char *dest;
   char *som;
   int i;
   
   i = 0;
   som = dest;
   dest = malloc(ft_strlen(src + 1) * sizeof(char));
   if (!dest)
   {
    return (NULL);
   }
   while (*dest[i] != '\0')
	{
		i++;
	}
   if (*src[i] != '\0')
   {
    *dest[i] = *src[i];
    i++;
   }
   *dest = '\0';
   return (som);
}

int main()
{
    char *src = "hello";
    printf("%s", ft_strdup(src));
    free(src);
    return (0);
}