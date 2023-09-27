#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
char ft_strlen(char **strs)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < 4)
    {
        while (strs[i][j] != '\0')
        {
            j++;
        }
        i++;
    }
    return (i);
}
char *ft_strjoin(int size, char **strs)
{

   char    *som; 
    int i;
    i = 0;
    som = strs[0];
    *strs = malloc((size) * sizeof(int));
    while (som[i] != '\0')
    {
        i++;
    }
    while (*strs[2] != '\0')
    {
        (*strs)[0] = som[i];
        i++;
    }
    som[i] = '\0';
    if (size < 0)
    {
        *strs = NULL;
    }
    return (*strs);
}

int main()
{
    int i;
    char **str1; 
    
    str1 = (char **)malloc(3 * sizeof(char));
    str1[0] = (char *) malloc(5 * sizeof(char));
    str1[1] = (char *) malloc(5 * sizeof(char));
    str1[2] = (char *) malloc(1 * sizeof(char));
    str1[0] = "hello";
    str1[1] = "world";
    str1[2] = "!";
    char *sep = ",";
    char *res = ft_strjoin(3, str1/*,sep*/);
    printf("%s", res);
    free(res);
    return (0);
    }
}
