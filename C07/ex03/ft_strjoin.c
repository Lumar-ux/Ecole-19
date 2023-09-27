#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char **str, int size, char *sep)
{
    int j;
    int i;
    int ct;

    ct = 0;
    i = 0;
    while (i < size)
    {
        j = 0;
    while (str[i][j] != '\0')
    {
        ct++;
        j++; 
    }
    j = 0;  
    while (sep[j] != '\0')
     {
        ct++;
        j++;
    }
    i++;
    }
    return (ct);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int in;
    int i;
    int j;
    char *strtab;

    strtab = (char *)malloc((ft_strlen(strs, size, sep) + 1) * sizeof(char));
    in = 0;
    i = 0;
    if (strtab == NULL)
    {
        return NULL;
    }
    while (i < size)
    {
        j = 0;
        while (strs[i][j] != '\0')
        {
            strtab[in++] = strs[i][j++];
        }
        j = 0;
        while (i < size - 1 && sep[j] != '\0')
        {
            strtab[in++] = sep[j++];
        }
        i++;
    }
    strtab[in] = '\0';
    return (strtab);
}

int main()
{
    //int i;
    char **str1; 
    
    str1 = (char **) malloc(3 * sizeof(char*));
    str1[0] = (char *) malloc((5 + 1) * sizeof(char));
    str1[1] = (char *) malloc((5 + 1) * sizeof(char));
    str1[2] = (char *) malloc((1 + 1) * sizeof(char));
    str1[0] = "hello";
    str1[1] = "world";
    str1[2] = "!";
    char *sep = ",,";
    char *res = ft_strjoin(3, str1, sep);
    printf("%s", res);
    free(res);
    return (0);
}
