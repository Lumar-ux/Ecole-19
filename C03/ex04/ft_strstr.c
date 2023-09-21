#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	longeur(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i = 0;
	int j = 0;
	int ok = 1;

	//char *diff = str;
while((i <= longeur(str)) - (longeur(to_find))) //((*to_find != '\0') && (*to_find))
{
	//i++;
	if(to_find[i] == str[i+j])
	{
		//j = 1;
		while(j < longeur(to_find) && ok == 1)
		{
			//j++;
			if(to_find[j] != str[i+j])
			{
			ok = 0;
			}
			if(to_find[j] == str[i+j] && j == longeur(to_find) - 1)
			{	
			return &str[i];
			}
			j++;
		}
		ok = 1;
	}
	i++;
}
return NULL;
}
int main(void)
{
char sig1[] = "Ecole 19, aume Ecole 42";
char sig2[] = "aime";
char *res1 =  ft_strstr(sig1, sig2);
if(res1 != NULL)
{
printf("%s", res1);
}
else
{
printf("NULL");
}
}
