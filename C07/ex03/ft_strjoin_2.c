#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char **strs)
{
    int i = 0;
    int j = 0;

    while (i <= 2)
    {
        while (strs[i][j] != '\0')
        {
            j++;   
        }
        i++;
        j = 0;
    }
    return (i);
}

char *ft_strjoin(int size, char **strs)
{
    int total_len;
    int i;
    int j;
    int in;

    i = 0;
    j = 0; 
    in = 0;
    total_len = 0;
    char *res = (char *)malloc((total_len) + 1 * sizeof(char));
    if (res == NULL)
    {
        return NULL;
    }
    while (i < size)
    {
      while (strs[i][j] != '\0')
      {
        total_len = total_len + ft_strlen(&strs[j]);
        j++;
      }
      i++;
    }
    while (i < size)
    {
        while (strs[i][j] != '\0')
        {
        res[in++] = strs[i][j];
        j++;
        }
        i++;
    }
    res[in] = '\0';
    return res;
}

int main()
{
    int i = 0;
    int j = 0;
    char *str1[] = {"hello", "world" , "!"};
    /*
    str1 = malloc((3) * sizeof(char));
    str1[0] = (char *)malloc((6) * sizeof(char));
    str1[1] = (char *)malloc((6) * sizeof(char));
    str1[2] = (char *)malloc((2) * sizeof(char));
    str1[0] = "hello";
    str1[1] = "world";
    str1[2] = "!";
    */
    char *res = ft_strjoin(ft_strlen(str1), str1);

    if (res != NULL)
    {
    while (i < ft_strlen(&str1[i]))
    {
        printf("%s\n", res);
        i++;
        j++;
    }
    }
    free(res);
    return 0;
}
