nt	ft_atoi(char *str)
{
	int	i;
	int	z;
	int	y;	i = 0;
	z = 1;
	y = 0;
	while (str[i] != '\0' && (str[i] < '0' || str[i] > '9'))
	{
		if ((str[i] >= 11 && str[i] <= 15) || str[i] == 32)
			i++;
		if (str[i] == '-')
		{
			z = z * -1;
			i++;
		}
		if (str[i] == '+')
			i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			y = y * 10 + (str[i] - 48);
			i++;
		}
		else if (str[i] == ' ')
		{
			i++;
		}
		else
		{
			return (y);
		}
	}
	return (y);
}/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "   ---+--+12 34ab567";	printf("%d\n", ft_atoi(str));
}
*/