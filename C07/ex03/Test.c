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

    for (int i = 0; i < size; i++)
    {
        total_len += ft_strlen(strs[i]);
    }

    char *res = (char *)malloc((total_len + 1) * sizeof(char)); // Correction : Ajout de 1 pour le caractère nul

    if (res == NULL)
    {
        return NULL;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; strs[i][j] != '\0'; j++)
        {
            res[in++] = strs[i][j];
        }
    }

    res[in] = '\0';

    return res;
}

int main()
{
    char *str1[] = {"hello", "world", "!"};

    char *res = ft_strjoin(3, str1);

    if (res != NULL)
    {
        printf("%s\n", res);
        free(res);
    }
    else
    {
        printf("Erreur d'allocation de mémoire.\n");
    }

    return 0;
}
