#include <unistd.h>
#include <stdio.h>
void ft_wr(char c)
{
	 write(1, &c, 1);
}

void ft_nbr(char a, int nb)
{
int i;
int cb;

i = 0;
nb;
//while(a < cb[i] || a != cb[i])

if(cb > 10)
{
	
ft_nbr((a / 10) + 48);
ft_nbr((a % 10) + 48);
}
void ft_putnbr(int nb)
{
int a;

a = 0;
	while(a <= nb)
	{
	if(a == nb)
		{
			ft_nbr(a, nb);
  		}
	a++;
	}
	
}
int main(void)
{
	int nb = "2222";
	ft_putnbr(nb);
	return (0);
}
