#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s2[i] != '\0')
    {
    s1[i] = s2[i];
    i++;
    }
    s1[i] = 0;
    return (s1);
}
int main(void)
{
    char sig1[] = "hello";
    char sig2[] = {};
    printf("%s", ft_strcpy(sig2, sig1));
    return (0);
}