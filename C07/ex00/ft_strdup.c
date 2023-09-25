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
   int i;
   //char *som;

   //som = *dest;
   i = 0;
   dest[i] = malloc((ft_strlen(src) + 1) * sizeof(char));
   if (!dest)
   {
    return (NULL);
   }
   while (src[i] != '\0')
   {
    dest[i] = src[i];
   i++;
   }
   dest[i] = '\0';
   return (dest);
}

int main()
{
    char *src = "hello";
    char *res1 = ft_strdup(src);
    printf("%s", res1);
    free(res1);
    return (0);
}
