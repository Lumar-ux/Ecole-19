#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
return strstr(str, to_find);
}

int main(void)
{
char sig1[] = "Ecole 19, aime Ecole 42";
char sig2[] = "aime";
char *res1 =  ft_strstr(sig1, sig2);
printf("%s", res1);
}
