#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int j = 0;

    while (str[j] != '\0')
    {
        j++;   
    }

    return j;
}

char *ft_strjoin(int size, char **strs)
{
    int total_len = 0;
    int in = 0;
    int i = 0;

    while (i < size)
    {
        total_len += ft_strlen(strs[i]);
    i++;
    }

    char *res = (char *)malloc((total_len + 1) * sizeof(char)); // Correction : Ajout de 1 pour le caractère nul

    if (res == NULL)
    {
        return NULL;
    }

    while (i < size)
    {
        i++;
        while (strs[i][j] != '\0')
        {
            res[in++] = strs[i][j];
            j++;
        }
    }

    res[in] = '\0';

    return res;
}

int main()
{
    int i = 0;
    char *str1[] = {"hello", "world", "!"};
    //char *sep[] = {','};
    char *res = ft_strjoin(3, str1/*,sep*/);

    if (res != NULL)
    {
    while (i <= 3)
    {
    printf("%s", res);
    i++;
    }
    }
    free(res);
    return (0);
}
