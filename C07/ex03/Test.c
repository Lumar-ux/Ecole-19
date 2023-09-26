#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char **strs)
{
    int i = 0;
    int j = 0;

    while (i < 3)
    {
        while (strs[i][j] != '\0')
        {
            j++;
        }
        i++;
        j = 0;
    }
    return i;
}

char *ft_strjoin(int size, char **strs)
{
    int total_len = 0;
  int i;
  int j;

  i = 0;
  j = 0;

    while (i < size)
    {
        total_len += ft_strlen(&strs[i]);
        i++;
    }

    char *result = (char *)malloc(total_len + 1);

    if (result == NULL)
    {
        return NULL;
    }

    int index = 0;

    while (i < size)
    {
    i++;
        while (strs[i][j] != '\0')
        {
         j++;
            result[index++] = strs[i][j];
        }
    }

    result[index] = '\0';

    return result;
}

int main()
{
    char *str1[] = {"hello", "world", "!"};

    int sizech = ft_strlen(str1);

    char *resultat = ft_strjoin(sizech, str1);

    if (resultat != NULL)
    {
        printf("%s\n", resultat);
        free(resultat);
    }
    return 0;
}
