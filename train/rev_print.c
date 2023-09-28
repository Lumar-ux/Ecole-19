#include <unistd.h>
#include <stdio.h>
char ft_strlen(char *str)
{
int i;

i = 0;
while (str[i] != '\0')
{
    i++;
}
return (i);
}
char *ft_rev_print(char *str)
{
int i;

i = ft_strlen(str);
    while(str[i] >= 0)
    {
        write(1, &str[i], 1);
        i--;
    }
    return (0);
}
int main(void)
{
    char str[] = "hello";
    ft_rev_print(str);
    return (0);
}