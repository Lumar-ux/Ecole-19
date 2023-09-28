#include <stdio.h>
int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
char    *ft_strrev(char *str)
{
char tmp;
int size;
int i;
size = ft_strlen(str) - 1;
i = 0;
while (i < ft_strlen(str))
{
tmp = str[size];
str[size] = str[i];
str[i] = tmp;
i++;
size--;
}
return (0);
}

int main(void)
{
char str[]="4529781";
ft_strrev(str);
printf("%s", str);
return (0);
}