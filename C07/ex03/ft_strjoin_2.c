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
    int total_len;
    int i;
    int j;
    int index;

    i = 0;
    j = 0; 
    index = 0;
    total_len = 0;
    
    char *result = (char *)malloc(total_len + 1);
    if (result == NULL)
    {
        return NULL;
    }
    while (i < size)
    {
        total_len = total_len + ft_strlen(&strs[i]);
        i++;
    }
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
    int i = 0;
    char **str1;
    str1 = malloc((3) * sizeof(char));
    str1[0] = (char *)malloc((6) * sizeof(char));
    str1[1] = (char *)malloc((6) * sizeof(char));
    str1[2] = (char *)malloc((2) * sizeof(char));
    str1[0] = "hello";
    str1[1] = "world";
    str1[2] = "!";

    int size = ft_strlen(&str1[0]) + ft_strlen(&str1[1]) + ft_strlen(&str1[3]);

    char *res = ft_strjoin(size, str1);

    if (res != NULL)
    {
        printf("%s\n", res);
        free(str1);
        free(str1[0]);
        free(str1[1]);
        free(str1[2]);
    }
    return 0;
}
