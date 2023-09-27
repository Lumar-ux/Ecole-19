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
    
    str1 = malloc((3) * sizeof(char));
    str1[0] = (char *) malloc((5) * sizeof(char));
    str1[1] = (char *) malloc((5) * sizeof(char));
    str1[2] = (char *) malloc((1) * sizeof(char));
    str1[0] = "hello";
    str1[1] = "world";
    str1[2] = "!";
    //char *sep[i] = ",";
    int *total_len = ft_strlen(&str1[0]) + ft_strlen(&str1[1]) + ft_strlen(&str1[3]);
    
    i = 0;
    int sizech = ft_strjoin(total_len, str1);
    if (sizech != 0)
    {
    while (i < sizech)
    {
    printf("%s", str1[i]);
    i++;
    }
    free(str1);
    free(str1[0]);
    free(str1[1]);
    free(str1[2]);
    return (0);
    }
}
