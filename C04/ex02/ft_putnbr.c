#include <unistd.h>
#include <stdio.h>
void ft_wr(char c)
{
	 write(1, &c, 1);
}
void ft_putnbr(long int nb)
{
	int number;
	if(nb == number/* || nbn == number*/ )
	{
		ft_wr('-');
	//	ft_putnbr(2147483647);
		number = (unsigned int)(-nb);
	}
	number = nb;
	if(number > 9)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
	{
		ft_wr(number + 48);
	}
}
int main(void)
{
//	int nbn;
	int nb = -922;

   //	ft_putnbr(nbn);
	ft_putnbr(nb);
	return (0);
}
