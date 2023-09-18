#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
return strcmp(s1, s2);
}

int main(void)
{
char sig1[] = "heloo";
char sig2[] = "heloo";
char dig1[] = "heLLoo";
char dig2[] = "helloo";
//char n = 2;
int res1 =  ft_strcmp(sig1, sig2);
int res2 =  ft_strcmp(dig1, dig2);
printf("%d", res1);
printf("%d", res2);
}
